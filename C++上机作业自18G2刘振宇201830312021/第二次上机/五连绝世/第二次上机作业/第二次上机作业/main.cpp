#include <iostream> 
#include"hero.h"
using namespace std;
int jishashu = 0;

inline void A()//  ��������
{
	int A1;
	cout << "1.ƽa" << endl;
	cin >> A1;
	switch (A1)
	{
	case 1:jishashu = jishashu + 1; break;
	default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break;
	}
}

int main()  //���������һ������Ͽ�Ȼ���
{
	cout << "����������������������������������������������������" << endl;
	cout << "����������������������������������������������������" << endl;
	cout << "��ӭ����������ҫ���о��������뵽��ս����ȫ����������" << endl;//����Ͽ�ȿ�����
	cout << "VRʱ����Final Fantasy��" << endl;//����³������
	cout << "�������ߣ���ʼֱ��ð�գ�" << endl;//����³������
	cout << "�����ؼ����������£��������ң�BABA��" << endl;//����³������
	cout << "��Ϸ��ʼ����������250��³���ߺţ���������ȥ��·������" << endl;
	cout << "����������������������������������������������������" << endl;
	cout << "����������������������������������������������������" << endl;
	int WZXG;
	cout << "1.�Կ�·����Ѫ�� ������ѹ����" << endl;
	cout << "2.����·��money���ΰ���" << endl;
	cout << "3.��·" << endl;
	cout << "4.�һ�" << endl;
	cin >> WZXG;
	while (WZXG != 4)  //�һ���������ɱ������Ϸֱ�ӽ�����
	{
		switch (WZXG)
		{
		case 1:duikanglu(); break;
		case 2: fayulu(); break;
		case 3: zhonglu(); break;
		case 4: cout << "Game over" << endl;
		default: cout << "Sorry�ٻ�ʦ��������Ϸ�з����Ѳ��㣬��Ŀǰ������������飡" << endl; break;
		}
		jishu();

	}
}