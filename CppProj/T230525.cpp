#include <iostream>
#include <climits>

int main()
{
	/* Q1. p129 ��������1 */
	/*using namespace std;

	int height;
	const int M = 100;

	cout << "Ű : ___ cm \b\b\b\b\b\b\b";
	cin >> height;

	cout << "Ű��" << height / M << "m " << height % M << "cm �Դϴ�.";*/

	/* Q2 . p129 ��������3, 5, 7 */
	using namespace std;

	double angle, m, s, latitude; //����, �а�, �ʰ�, ����

	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�:" << endl;
	cout << "����, ������ �Է��Ͻÿ�: ";
	cin >> angle;
	cout << "������, �а��� �Է��Ͻÿ�: ";
	cin >> m;
	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
	cin >> s;

	latitude = angle + double(m / 60) + double(s / 3600);
	cout << angle << "��, " << m << "��, " << s << "�� = " << latitude << "��";

	// 3��
	long long world_population, USA_population;

	cout << "���� �α����� �Է��Ͻÿ�: ";
	cin >> world_population;
	cout << "�̱��� �α����� �Է��Ͻÿ�: ";
	cin >> USA_population;
	cout << "���� �α������� �̱��� �����ϴ� ������ " << double(USA_population) / double(world_population) * 100  << "%�̴�.";

	double gasoline;

	cout << "�ֹ��� �Һ�: ";
	cin >> gasoline;
	cout << "�̱� ��Ÿ���� �ֹ��� �Һ��� " << 62.14 / (gasoline / 3.875) << "mpg�̴�.";

	return 0;
}