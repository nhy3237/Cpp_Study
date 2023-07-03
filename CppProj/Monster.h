#pragma once
#include <string>

using namespace std;

class Monster
{
private:
	string name;
	double x, y, z;
	double hp;
	double attackPower;
	double defencePower;
public:
	Monster() { name = ""; }
	Monster(string str);
	void Name() const;
	void SetName(string str);
	string GetName();
	
	void Attack();
	/*void update();
	void Render();
	void Defencse();
	double getXPosition() { return x; }
	double getYPosition() { return y; }
	double getZPosition() { return z; }*/
};

class FlyingMonster : public Monster
{
private:
	bool isFlying;

public:
	FlyingMonster(string str,bool bFlying);
	void ShowName();
	void Attack();

	//void Attack(); // _toSky();
};