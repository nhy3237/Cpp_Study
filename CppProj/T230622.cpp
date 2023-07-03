/*
Q1. 홀수의 양의 정수 k가 주어졌을 때, 가로 세로의 크기가 k인 공간에
	오른쪽으로 정렬된 삼각형을 출력하는 프로그램을 작성하시오.
	이 때 삼각형의 모서리는 '*'로 출력하고, 삼각형의 내부 문자는
	'+'로 채워야 한다.
	조건 > 삼각형 크기는 (3<=크기<=99) 사이의 정수 중에 홀수가
	입력되고 잘못된 데이터가 입력되는 경우는 없다. 
	ex > 3				5
			*				*
		  * *			  * *
			*			* +	*
				 0 		  * *
							*						*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned int k; 
	
	cout << "100 이하의 홀수 양의 정수 k : ";
	cin >> k;
	while (!(k >= 3 && k <= 99 && k % 2 == 1))
	{
		cout << "100 이하의 홀수 양의 정수가 아닙니다. 다시 입력해주세요.\n"
			"100 이하의 홀수 양의 정수 k : ";
		cin >> k;
	}

	int mid = k / 2;

	for (int i = 0; i < k; i++)
	{
		int num = mid - i;
		for (int j = 0; j < mid + 1; j++)
		{
				if (j == abs(num) || j == mid) cout << "* ";
				else if (j > abs(num)) cout << "+ ";
				else cout << "  ";
		}
		cout << endl;
	}
	return 0;
}