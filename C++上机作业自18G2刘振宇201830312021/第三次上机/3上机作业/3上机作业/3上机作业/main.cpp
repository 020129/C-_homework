#include <iostream>
#include "3shangji.h"
using namespace std;
int main()
{
	cout << "������������������������������������������" << endl;
	cout << "��������������ӭ����������ҫ!������������" << endl;
	cout << "����������ƾ��ѽ���" << endl;
	cout << "��������������Ǯ" << endl;
	cout << "�뾡�����һ��������" << endl;
	cout << "������������������ʼ��Ϸ����������������" << endl;
	cout << "1.����������" << endl;
	cout << "2.��ʾ������״̬" << endl;
	cout << "3.������Ϸ" << endl;
	Game Fangyuta(1000, 999, 999, 1);
	int x;
	cin >> x;
	while (x != 3)
	{
		if (x == 2)
		  {Fangyuta.showGame();}
		else
			switch (x)
		{case 1: Fangyuta.Fight(); Fangyuta.showGame();
				if (Fangyuta.g1 == 0)
				{
					cout << "�ƻ�������" << endl;
					Fangyuta.~Game();
				}break;
			default:cout << "Sorry,You are not allowed to do something else" << endl; break;}
		cin >> x;
     }
return  0;
}