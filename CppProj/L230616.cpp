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
		cout << ": 탁구대가 있다.\n";
	else
		cout << ": 탁구대가 없다.\n";
	player1.Name();
	if (player1.HasTable())
		cout << ": 탁구대가 있다.\n";
	else
		cout << ": 탁구대가 없다.\n";
	cout << "이름: ";
	rplayer1.Name();
	cout << "; 랭킹: " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(1212, player1);
	cout << "이름: ";
	rplayer2.Name();
	cout << "; 랭킹: " << rplayer2.Rating() << endl << endl;


	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);

	cout << "baseDMA 객체를 출력한다:\n";
	cout << shirt << endl;
	cout << "lacksDMA 객체를 출력한다:\n";
	cout << balloon << endl;
	cout << "hasDMA 객체를 출력한다:\n";
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "lacksDMA 복사 결과:\n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "hasDMA 대입결과:\n";
	cout << map2 << endl;

	return 0;
}