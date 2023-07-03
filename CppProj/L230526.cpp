#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>
#include <crtdbg.h>

using namespace std;

char* getname(void);

int main()
{
	// 04.4 getline() 함수로 한 행을 읽는다.
	/*using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하십시오:\n";
	cin.getline(name, ArSize);
	cout << "좋아하는 디저트를 입력하십시오;\n";
	cin.getline(dessert, ArSize);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";*/

	// 04.5 get() & get() 으로 여러 단어를 읽는다.
	/*cout << "이름을 입력하십시오:\n";
	cin.get(name, ArSize).get();
	cout << "좋아하는 디저트를 입력하십시오;\n";
	cin.get(dessert, ArSize).get();
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";*/

	// 04.6 수치 입력 뒤에 오는 문자열 입력
	/*cout << "지금 사시는 아파트에 언제 입주하셨습니까?\n";
	int year;
	cin >> year;
	cout << "사시는 도시를 말씀해 주시겠습니까?\n";
	char address[80];
	cin.get(address, 80).get();
	cout << "아파트 입주 연도: " << year << endl;
	cout << "도시: " << address << endl;
	cout << "등록이 완료되었습니다!\n";*/

	// 04.9 String 클래스의 기타 기능
	/*char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " paste";
	strcat(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);
	
	cout << str1 << " 문자열에는 "
		<< len1 << " 개의 문자가 들어있다.\n";
	cout << charr1 << " 문자열에는 "
		<< len2 << " 개의 문자가 들어있다.\n";

	double* p3 = new double[3];

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1]은 " << p3[1] << "입니다.\n";
	p3 = p3 + 1;
	cout << "이제는 p3[0]이 " << p3[0] << "이고, ";
	cout << "p3[1]이 " << p3[1] << "입니다.\n";
	p3 = p3 - 1;
	cout << "이제는 p3[0]이 " << p3[0] << "입니다.\n\n";
	delete[] p3;*/

	//4.18 배열을 위해 new 연산자 사용
	/*double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3,2,1 };

	double* pw = wages;
	short* ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "pw 포인터에 1을 더함:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "ps 포인터에 1을 더함:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	cout << "배열 표기로 두 원소에 접근\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "포인터 표기로 두 원소에 접근\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = wages 배열의 크기\n";
	cout << sizeof(pw) << " = pw 포인터의 크기\n\n";*/

	//04.20 문자열을 지시하는 포인터의 사용
	/*char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;
	
	cout << animal << " and ";
	cout << bird << "\n";

	cout << "동물의 종류를 입력하십시오: ";
	cin >> animal;

	ps = animal;
	cout << ps << "s!\n";
	cout << "strcpy() 사용 전:\n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "strcpy() 사용 후: \n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;
	delete[]ps;*/
	
	//04.22 delete 연산자 사용
	char* name;

	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete[]name;

	name = getname();
	cout << (int*)name << ": " << name << "\n";
	delete[]name;

	return 0;
}

char* getname()
{
	char temp[80];
	cout << "이름을 입력하십시오: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}