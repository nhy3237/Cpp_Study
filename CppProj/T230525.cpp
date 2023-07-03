#include <iostream>
#include <climits>

int main()
{
	/* Q1. p129 연습문제1 */
	/*using namespace std;

	int height;
	const int M = 100;

	cout << "키 : ___ cm \b\b\b\b\b\b\b";
	cin >> height;

	cout << "키는" << height / M << "m " << height % M << "cm 입니다.";*/

	/* Q2 . p129 연습문제3, 5, 7 */
	using namespace std;

	double angle, m, s, latitude; //도각, 분각, 초각, 위도

	cout << "위도를 도, 분, 초 단위로 입력하시오:" << endl;
	cout << "먼저, 도각을 입력하시오: ";
	cin >> angle;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> m;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> s;

	latitude = angle + double(m / 60) + double(s / 3600);
	cout << angle << "도, " << m << "분, " << s << "초 = " << latitude << "도";

	// 3번
	long long world_population, USA_population;

	cout << "세계 인구수를 입력하시오: ";
	cin >> world_population;
	cout << "미국의 인구수를 입력하시오: ";
	cin >> USA_population;
	cout << "세계 인구수에서 미국이 차지하는 비중은 " << double(USA_population) / double(world_population) * 100  << "%이다.";

	double gasoline;

	cout << "휘발유 소비량: ";
	cin >> gasoline;
	cout << "미국 스타일의 휘발유 소비량은 " << 62.14 / (gasoline / 3.875) << "mpg이다.";

	return 0;
}