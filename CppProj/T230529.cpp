#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct TCL
{
	string company;
	float diameter;
	float weight;
};

struct car
{
	char company[20];
	int year;
};

int main()
{
	// Q1. p232 연습문제 7,8
	/*TCL *ps = new TCL;

	cout << "피자의 지름 : ";
	cin >> ps->diameter;
	cin.get();
	cout << "피자 회사의 이름 : ";
	getline(cin, ps->company);
	cout << "피자의 중량 : ";
	cin >> ps->weight;

	cout << "\n" << ps->company << "회사의 피자 지름은 " << ps->diameter << "이고, 중량은 " << ps->weight << "입니다.\n\n";

	delete ps;*/

	/* Q2. 단어를 입력받아서 회문인지 여부를 판단해서 결과를 출력하는 프로그램을 작성하라. */
	/*string word, temp;
	
	int num = 0;

	cout << "단어를 입력 : ";
	cin >> word;
	
	temp = word;

	for (int i = word.size() - 1; i >= 0; i--)
	{
		temp[num] = word[i];
		num++;
	}

	if (temp == word)
	{
		cout << word << " 은 회문입니다.\n";
	}
	else
	{
		cout << word << " 은 회문이 아닙니다.\n";

	}*/

	/* Q3. 1~10 사이의 정수를 입력받아 다음과 같은 형태로 출력하는 프로그램을 작성하라.
		라인 숫자 입력 : 5
		 1
		212
	   32123
	  4321234
	 543212345 */

	//int row, col, mid, num; //행, 열, 열 중간, 출력값 

	//cout << "라인 숫자 입력 : ";
	//cin >> row;

	//col = row * 2 - 1;
	//mid = row - 1;

	////행
	//for (int i = 0; i < row; i++)
	//{
	//	num = i + 1;

	//	//열
	//	for (int j = 0; j < col; j++)
	//	{
	//		if (mid - i <= j && mid + i >= j)
	//		{
	//			cout << num;
	//			if (num > 1 && j <= mid)
	//			{
	//				num--;
	//			}
	//			else
	//			{
	//				num++;
	//			}
	//		}
	//		else
	//		{
	//			cout << " ";
	//		}
	//	}
	//	cout << "\n";
	//}

	// Q4. p305 연습문제 7
	/*int numCar;
	
	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	cin >> numCar;

	car* ps = new car[numCar];

	for (int i = 0; i < numCar; i++)
	{
		cout << "자동차 #" << i + 1 << ":\n";
		cout << "제작업체: ";
		cin >> ps[i].company;
		cout << "제작년도: ";
		cin >> ps[i].year;
	}

	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";
	for (int i = 0; i < numCar; i++)
	{
		cout << ps[i].year << "년형 " << ps[i].company << "\n";
	}*/

	// Q5. p305 연습문제 8
	char word[20];
	int count = 0;

	cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) :\n";

	while (1)
	{
		cin >> word;

		if (strcmp(word, "done") == 0)
		{
			break;
		}
		count++;
	}
	
	cout << "총 " << count << " 단어가 입력되었습니다.\n";

	return 0;
}