#include<iostream>
#include"Hero.h"
using namespace std;
string sunwukong;
int skill;
int num=2;
int aim1=5000;
int aim2=3000;
int main()
{
	Hero Zhugeliang;
	Zhugeliang.showskill();
	cout << "�غϿ�ʼ" << endl;
	cout << "1������һ 2�����ܶ� 3��������" << endl;
	cin >>skill;
	if (skill == 1)
	{
		aim1=aim1-Zhugeliang.use_skill1(num);
		aim2 = aim2- Zhugeliang.use_skill1(num);
		cout << "Ŀ��һ����ֵ" << aim1;
		cout << "Ŀ�������ֵ" << aim2 << endl;
	}
	while (1)
	{
		cout << "��1�����ͷż��ܣ�������" << endl;
		cin >> skill;
		aim1 = aim1 - Zhugeliang.use_skill1(num);
		aim2 = aim2 - Zhugeliang.use_skill1(num);
		cout << "Ŀ��һ����ֵ" << aim1;
		cout << "  Ŀ�������ֵ" << aim2 << endl;
		if (aim2 <= 0)
		{
			cout << "���ɱ��һ������" << endl;
			break;
		}
	}
	while(1)
	{
		cout << "��1�����ͷż���" << endl;
		cin >> skill;
		aim1 = aim1 - Zhugeliang.use_skill1(1);
		cout << "  Ŀ�������ֵ" << aim1 << endl;
		if (aim1 <= 0)
		{
			cout << "����֮���Ѿ�������" << endl;
			break;
		}
	}
	return 0;
}