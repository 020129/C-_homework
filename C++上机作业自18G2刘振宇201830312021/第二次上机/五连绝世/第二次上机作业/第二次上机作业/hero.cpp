#include <iostream>
#include"hero.h"
using namespace std;
void duikanglu()//�Կ�·
{
	int duikangluxuanze;//��ѡ��ȥ�Կ�·
	cout << "���˶Կ�·���ֶ������Ҿ��ڴ�ӵ�з" << endl;
	cout << "1.���ˣ�Ӳ�գ� ǿɱ���Ҿ���" << endl;
	cout << "2.֧Ԯ����·" << endl;
	cout << "3.֧Ԯ��·" << endl;
	cout << "���ʣ��ʾ�������ɱ����ɱ��������" << endl;
	cin >> duikangluxuanze;
	while (duikangluxuanze != 4)
	{
		switch (duikangluxuanze)
		{
		case 1: up(); break; //���ˣ�Ӳ�գ� ǿɱ���Ҿ���
		case 2: fayulu(); break; //֧Ԯ����·
		case 3: zhonglu(); break; //֧Ԯ��·
		default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break; //deafult ����ѡ�Χ
		}
	}
}
void zhonglu()//��·
{
	int zhongluxuanze;//��ѡ��ȥ��·
	cout << "ͨ��С��ͼ������·��������λ̫������" << endl;
	cout << "1.��λ�㿪����������ܺ�ǿ��һ���� һ�ڴ���" << endl;
	cout << "2.֧Ԯ�Կ�·" << endl;
	cout << "3.֧Ԯ����·" << endl;
	cout << "���ʣ��ʾ�������ɱ����ɱ��������" << endl;
	cin >> zhongluxuanze;
	while (zhongluxuanze != 4)
	{
		switch (zhongluxuanze)
		{
		case 1:cout << "1" << endl;  middle(); break; //��λ�㿪����������ܺ�ǿ��һ���� һ�ڴ���
		case 2: duikanglu(); break; //֧Ԯ�Կ�·
		case 3: fayulu(); break; //֧Ԯ����·
		default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break; //deafult ����ѡ�Χ
		}
	}
}
void fayulu()//����·
{
	int xialuxuanze;//

	cout << "���ٸϵ��˷���·�����ߺܲ��������������Ҫ�����ˣ���" << endl;
	cout << "1.��������Խ��ǿɱ�㣬�������÷�������ɱ���Ӷ���" << endl;
	cout << "2.ȥ����·������" << endl;
	cout << "3.������·���ط�����" << endl;
	cout << "���ʣ��ʾ�������ɱ����ɱ��������" << endl;
	cin >> xialuxuanze;
	while (xialuxuanze != 4)
	{
		switch (xialuxuanze)
		{
		case 1: down(); break; //��������Խ��ǿɱ�㣬�������÷�������ɱ���Ӷ���
		case 2: duikanglu(); break; //ȥ����·������
		case 3: zhonglu(); break; //������·���ط�����
		default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break; //deafult ����ѡ�Χ
		}
	}
}
void middle() //����·����һ��
{
	int caozuo1;
	cout << "1.һ���ܼ���" << endl;
	cout << "2.ƽa" << endl;
	cin >> caozuo1;
	while (caozuo1 != 3)
	{
		switch (caozuo1)
		{
		case 1:jishashu = jishashu + 1; break;
		case 2:inline void a(); break;
		default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break; //deafult ����ѡ�Χ
		}
		jishu(); break;
	}
	if (jishashu>5)
		return win();
	else
	{
		return  zhonglu();
	}
}
void up()//�ϵ���ϸ�ڲ���
{
	int caozuo2;
	cout << "1.������������Ҿ��������" << endl;
	cout << "2.ƽa" << endl;
	cin >> caozuo2;
	while (caozuo2 != 3)
	{
		switch (caozuo2)
		{
		case 1:jishashu = jishashu + 1; break;
		case 2:inline void a(); break;
		default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break; //deafult ����ѡ�Χ
		}
		jishu(); break;
	}
	if (jishashu>5)
		return win();
	else
	{
		return duikanglu();
	}
}
void down() //��·ֱ��˫ɱ
{
	int caozuo3;//��·С��սһ���
	cout << "1.����������ɱ�㣬�㷴�ִ����յ�����\n�������ִ�����ȥ��ת�����ܣ��������ź�����" << endl;
	cin >> caozuo3;
	while (caozuo3 != 2)
	{
		switch (caozuo3)
		{
		case 1:jishashu = jishashu + 2; break;
		default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break; //deafult ����ѡ�Χ
		}
		jishu(); break;
	}
	if (jishashu>5)
		return win();
	else
	{
		return  fayulu();
	}
}
void win()//�õ���ɱ
{
	cout << "������������" << endl;
	cout << "������������" << endl;
	cout << "���ɵ�Ư����" << endl;
	cout << "���ɵ�Ư����" << endl;
}