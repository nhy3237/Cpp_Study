#include <iostream>
#include "move.h"

using namespace std;

int main()
{
	Move M(1, 2);

	cout << "M 초기화\n";
	M.showmove();
	Move M1 = M.add(M);

	cout << "M1 = M + M\n";
	M.showmove();
	M1.showmove();

	cout << "M 리셋\n";
	M.reset();
	M.showmove();
	M1.showmove();
	return 0;
}