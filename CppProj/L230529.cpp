#include <iostream>

int main()
{
	using namespace std;
	int x;

	cout << "대입 표현식 x = 100의 값은 ";
	cout << (x = 100) << endl;
	cout << "현재 x의 값은 " << x << endl;
	cout << "관계 표현식 x < 3의 정수값은 ";
	cout << (x < 3) << endl;
	cout << "관계 표현식 x > 3의 정수값은 ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "관계 표현식 x < 3의 bool값은 ";
	cout << (x < 3) << endl;
	cout << "관계 표현식 x > 3의 bool값은 ";
	cout << (x > 3) << endl;

	//p264. 문자열 비교 불가능
	char word[20] = "mate";

	if (word == "mate")
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	//가능
	strcmp(word, "mate");
	string word2 = "mate";
	if (word2 == "mate")
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	// 5.16) while 루프로 문자 읽기
	char ch;
	int count = 0;
	cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오:\n";
	//cin >> ch;
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		//cin >> ch;
		cin.get(ch);
	}
	cout << endl << count << " 문자를 읽었습니다.\n";

	return 0;
}