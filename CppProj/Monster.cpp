#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster(string str)
	: name(str)
{

}

void Monster::Name() const
{
	cout << name << endl;
}

void Monster::SetName(string str)
{
	name = str;
}

string Monster::GetName()
{
	return name;
}

void Monster::Attack()
{
	cout << "Monster Attack" << endl;
}

FlyingMonster::FlyingMonster(string str, bool bFlying)
	:Monster(), isFlying(bFlying)
{
	SetName(str);
	
}

void FlyingMonster::ShowName()
{
	if (isFlying)
	{
		cout << GetName() << " �� ���߿� �ִ�." << endl;
	}
	else
	{
		cout << GetName() << " �� ���� �ִ�." << endl;
	}
}

void FlyingMonster::Attack()
{
	cout << "FlyingMonster Attack" << endl;
}
