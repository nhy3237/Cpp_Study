#include <iostream>

using namespace std;
int solution(unsigned int l, int* v);

int main()
{
	// 전구가 좌우측을 밝힐 수 있는 길이 d
	// 모든 가로등에는 d 값이 같은 전구를 달아야 함
	// 어두운 부분이 있어서는 안 된다.

	// 새로운 도로의 길이가 L
	// 총 n 개의 가로등

	// d 값 중 최솟값을 구함
	
	// 입력 : 전체 도로 길이 l, 배열 v 

	unsigned int l, n;

	cout << "전체 도로의 길이: "; cin >> l;
	int* v = new int[l + 1];

	cout << "길을 밝힐 수 있는 길이: " << solution(l, v);//totCnt / 2 + 1;

	delete[]v;
	
	return 0;
}

int solution(unsigned int l, int* v)
{
	int d = 0, n;

	int* v2 = new int[l + 1];

	cout << "가로등의 개수: "; cin >> n;
	cout << "가로등이 세워진 위치 배열: ";
	for (int i = 0; i <= l; i++)
	{
		v2[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		v2[v[i]] = 1;
	}

	int cnt = 0;

	for (int i = 0; i <= l; i++)
	{
		if (v2[i] == 0)
		{
			cnt++;
		}
		else
		{
			if (cnt > d)
			{
				d = cnt;
			}
			cnt = 0;
		}
	}
	delete[]v2;
	return d / 2 + 1;
}