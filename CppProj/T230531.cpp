#include <iostream>
#include <fstream>
#include <cstdlib>

const int strsize = 60;

struct bop
{
	char fullname[strsize];	// 실명
	char title[strsize];	// 직함
	char bopname[strsize];	// BOP 아이디
	int preference;			// 0 = 회원 등록, 1 = fullname, 2 = title, 3 = bopname;
};

int regist();

int main()
{
	/* Q1. 비행기의 가속도 a와 이륙속도 v가 주어졌을 때,
		   비행기가 이륙하기 위한 최소 활주 길이를 계산하는
		   프로그램을 작성하라.
		    길이 = v^2 / 2a
		   사용자에게 m/s 단위로 v와 m/s^2 단위로 a를 입력하도록
		   알려주고, 최소 활주 길이를 출력하는 프로그램을 작성.
		   ex > Speed and Accelation : 60 3.5
				Minimum runway length : 514.286 */

	/*int Speed;
	double Accelation;

	using namespace std;
	cout << "Speed and Accelation : ";
	cin >> Speed;
	cin >> Accelation;

	cout << "Minimum runway length : " << Speed * Speed / (2 * Accelation);*/

	/* Q2. 두점 (x1, y1), (x2, y2) 를 입력받아 이 두점 사이의 거리를 출력하는
		   프로그램을 작성.
		   거리 계산 공식은
			SQUARE ROOT( (x2-x1)^2 + (y2-y1)^2)*/

	/*using namespace std;
	double x1, x2, y1, y2, Distance;

	cout << "x1, y1 : ";
	cin >> x1 >> y1;
	
	cout << "x2, y2 : ";
	cin >> x2 >> y2;

	cout << "Distance : " << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;*/

	/*
	Q3. p368 4번
		a. 회원등록
			이름, 직함, bop id
		b. 실명 열람
		c. 직함 열람
		..
		q. 종료 */
	char menu;
	int count = 0;

	bop* ps = new bop[count];

	using namespace std;

	cout << "Benevolent Order of Programmers\n\
a. 회원 등록(이름, 직함, BOP ID)\nb. 실명으로 열람\tc. 직함으로 열람\n\
d. BOP 아이디로 열람\te. 회원이 지정한 것으로 열람\n\
q. 종료\n\
원하는 것을 선택하십시오: ";

	cin >> menu;
	switch (menu)
	{
	case 'a':
		regist();
		break;
	case 'b':
		ps->preference = 1;
		break;
	case 'c':
		ps->preference = 2;
		break;
	case 'd':
		ps->preference = 3;
		break;
	case 'e':
		if (ps->preference != 1 && ps->preference != 2 && ps->preference != 3)
		{
			cout << "지정된 열람 방법이 없어서 직함으로 열람합니다.";
			ps->preference = 1;
		}
		break;
	case 'q': 
		exit(EXIT_SUCCESS); 
		break;
	}


	return 0;
}

int regist()
{

}