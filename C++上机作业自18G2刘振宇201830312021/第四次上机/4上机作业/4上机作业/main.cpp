#include <iostream>
#include "4�ϻ�.h"
using namespace std;
int main()
{
	cout << "������������������������������������������" << endl;
	cout << "��������������ӭ����������ҫ!������������" << endl;
	cout << "�����ǰһ�׶ε�������ƾ��ѽ���" << endl;
	cout << "���һ������������Ǯ�Ѿ���������������" << endl;
	cout << "�����̣����ϣ�ͬʱ����2��������������" << endl;
	cout << "������������������ʼ��Ϸ����������������" << endl;
	cout << "1.����������" << endl;
	cout << "2.��ʾ������״̬" << endl;
	cout << "3.������Ϸ" << endl;
	Game Fangyuta1(1000, 999, 999, 1);
	Game Fangyuta2(1000, 999, 999, 1);
	int x;
	cin >> x;
	while (x != 3)
	{
		if (x == 2)
		{
			Fangyuta1.showGame();
			Fangyuta2.showGame();
		}
		else
			switch (x)
		{
			case 1: Fangyuta1.Fight(); Fangyuta1.showGame(); Fangyuta2.Fight(); Fangyuta2.showGame();
				if (Fangyuta1.g1 == 0 && Fangyuta2.g1==0)
				{
					cout << "�ƻ�������" << endl;
					Fangyuta1.~Game(); Fangyuta2.~Game();
				}break;
			default:cout << "Sorry,You are not allowed to do something else" << endl; break;
		}
		cin >> x;
	}
	return  0;
}