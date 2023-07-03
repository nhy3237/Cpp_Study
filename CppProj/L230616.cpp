#include "Monster.h"
#include "tabtenn1.h"
#include "dma.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Monster ms("Monster");

	ms.Name();
	ms.Attack();

	FlyingMonster fm("FlyingMonster", true);
	fm.ShowName();
	fm.Attack();
	cout << endl;

	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
	rplayer1.Name();
	if (rplayer1.HasTable())
		cout << ": Ź���밡 �ִ�.\n";
	else
		cout << ": Ź���밡 ����.\n";
	player1.Name();
	if (player1.HasTable())
		cout << ": Ź���밡 �ִ�.\n";
	else
		cout << ": Ź���밡 ����.\n";
	cout << "�̸�: ";
	rplayer1.Name();
	cout << "; ��ŷ: " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(1212, player1);
	cout << "�̸�: ";
	rplayer2.Name();
	cout << "; ��ŷ: " << rplayer2.Rating() << endl << endl;


	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);

	cout << "baseDMA ��ü�� ����Ѵ�:\n";
	cout << shirt << endl;
	cout << "lacksDMA ��ü�� ����Ѵ�:\n";
	cout << balloon << endl;
	cout << "hasDMA ��ü�� ����Ѵ�:\n";
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "lacksDMA ���� ���:\n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "hasDMA ���԰��:\n";
	cout << map2 << endl;

	return 0;
}