#include <iostream>
#include <string>
#include <cstring>

struct CandyBar
{
	char name[20];
	double weight;
	int calorie;
};

int main()
{
	// Q1. p232 연습문제 5, 6, 9
	using namespace std;

	int number = 3;

	CandyBar* ps = new CandyBar[number];
	
	ps[0] = { "Mocha Munch", 2.3, 350 };
	ps[1] = { "Chocolate", 5.7, 738 };
	ps[2] = {"Strawberry", 3.5, 561};

	cout << ps[0].name << endl;
	cout << "중량 : " << ps[0].weight << endl;
	cout << "칼로리 : " << ps[0].calorie << "\n\n";
	cout << ps[1].name << endl;
	cout << "중량 : " << ps[1].weight << endl;
	cout << "칼로리 : " << ps[1].calorie << "\n\n";
	cout << ps[2].name << endl;
	cout << "중량 : " << ps[2].weight << endl;
	cout << "칼로리 : " << ps[2].calorie << "\n\n";

	delete[] ps;

	return 0;
}