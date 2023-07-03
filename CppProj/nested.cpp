#include <iostream>
#include <string>
#include "queuetp.h"

using namespace std;

int main()
{
	QueueTP<string> cs(5);
	string temp;

	while (!cs.isfull())
	{
		cout << "�̸��� �Է��Ͻʽÿ�. �����Ͻ� ������� "
			"����ǰ�� �帳�ϴ�.\n"
			"�̸�: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	cout << "ť�� ���� á���Ƿ�, ���ݺ��� ����ǰ�� ������ �帮�ڽ��ϴ�.\n";
	
	while (!cs.isempty())
	{
		cs.dequeue(temp);
		cout << temp << " ��! �����մϴ�. �ȳ��� ���ʽÿ�.\n";
	}
	return 0;
}