#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace std;

	vector<vector<char>> v(5, vector<char>(15, '+'));

	for (int i = 0; i < 5; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			v[i][j] = str[j];
		}
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (v[j][i] == '+') continue;
			cout << v[j][i];
		}
	}
	return 0;
}