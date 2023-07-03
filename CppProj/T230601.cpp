#include <iostream>

int main()
{
	/*Q1. 삼각형의 3개의 점 (x1, y1), (x2, y2), (x3, y3)를
		  알고 있을 때 이 삼각형의 면적을 구하는 프로그램을 작성하라.
		  ex> 세 점 입력 : 1.5 -3.4 4.6 5 9.5 -3.4
			  삼각형의 면적 : 33.6 */

			  /*using namespace std;
			  double x1, x2, x3, y1, y2, y3, res;

			  cout << "세 점 입력 : ";
			  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

			  res = ((x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3)) / 2;

			  if (res < 0)
			  {
				  res *= -1;
			  }

			  cout << "삼각형의 면적 : " << res << endl;*/

			  /*
			  Q2. 게임에서 비밀번호에 어떤 법칙을 요구하는 경우가 있다.
				  다음과 같이 비밀번호를 만들어야 한다고 하자
				  1. 비밀번호는 적어도 8개의 문자여야 한다.
				  2. 비밀번호는 문자와 숫자로만 구성되어야 한다.
				  3. 비밀번호는 적어도 두 개의 숫자가 포함되어야 한다.
				  사용자가 비밀번호를 입력했을 때,
				  위 법칙에 맞으면 "Valid password"를
				  그렇지 않으면 "Invalid password"를 출력하는 프로그램을 작성하라. */
	using namespace std;

	string password;
	int count = 0, flag = 1;

	cout << "비밀번호를 입력하십시오.\n";
	cin >> password;

	// 1. 비밀번호는 적어도 8개의 문자여야 한다.
	if (password.size() < 8)
	{
		flag = 0;
		printf("8자 이상의 비밀번호를 입력해야 합니다.\n");
	}

	// 2. 비밀번호는 문자와 숫자로만 구성되어야 한다.
	if (flag == 1)
	{
		for (int i = 0; i < password.size(); i++)
		{
			if (!isalnum(password[i]))
			{
				flag = 0;
				printf("문자와 숫자로만 구성되어야 합니다.\n");
				break;
			}
		}
	}

	// 3. 비밀번호는 적어도 두 개의 숫자가 포함되어야 한다.
	if (flag == 1)
	{
		for (int i = 0; i < password.size(); i++)
		{
			if (isdigit(password[i]))
			{
				count++;
			}
		}

		if (count < 2)
		{
			flag = 0;
			printf("적어도 두 개의 숫자가 포함되어야 합니다.\n");
		}
	}

	if (flag == 1)
	{
		cout << "Valid password\n";
	}
	else 
	{
		cout << "Invalid password\n";
	}

	return 0;
}