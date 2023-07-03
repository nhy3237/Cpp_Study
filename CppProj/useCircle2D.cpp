// useCircle2D.cpp

#include "Circle2D.h"
#include <iostream>

using namespace std;

int main()
{
	Circle2D c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10.5);

	cout << "1. c1(2,2,5.5)의 면적 : " << c1.getArea() << endl;
	cout << "2. c1(2,2,5.5)의 둘레 : " << c1.getPrimeter() << endl;
	cout << "3. 점(3,3)이 c1(2,2,5.5) 내부에 있는지? ";
	if (!c1.contains(3, 3))
	{
		cout << "FALSE" << endl;
	}
	else cout << "TRUE" << endl;

	cout << "4. c2(2,2,5.5)가 c1(2,2,5.5) 내부에 있는지? ";
	if (!c1.contains(c2))
	{
		cout << "FALSE" << endl;
	}

	cout << "5. c3(4,5,10.5)가 c1(2,2,5.5)에 중첩 하는지? ";
	if (!c1.overlaps(c3))
	{
		cout << "FALSE" << endl;
	}
	return 0;
}