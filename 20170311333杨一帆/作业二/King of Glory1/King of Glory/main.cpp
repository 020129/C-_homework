#include<iostream>
#include"Sword_ruling.h"

using namespace std;
inline int ping_a(int &a);
int E1 = 2000, E2 = 2000;
int main ()
{
	int x,y;
	int i = 1000;
	cout<<"������ҫ����������������"<<endl;
	cout<<"ѡ���ʼӢ�ۣ�1 ��ɪ 2 槼�"<<endl;
	cin>>x;
	if (x ==1) {
		cout << "��ѡ���Ӣ�ۣ���ɪ"<< endl;
	}
	if(x==2) {
		cout << "��ѡ���Ӣ�ۣ�槼�" << endl;
	}
	cout << "��������ֵ��1000" << endl;
	cout << "  ������100  ������50" << endl;
	cout << "��һ�����˳��֣��������" << endl;
	while (1)
	{
		cout << "��ѡ�߹�����ʽ��0����ͨ������1������" << endl;
		cin >> y;
		switch (y) {
		case 0:cout << "����-100��ʣ������ֵ��" << ping_a(E1) << endl; break;
		case 1:cout << "����-200��ʣ������ֵ��" << Sword_ruling(E1) << endl; break;
		}
		if (E1<= 0) {
			cout << "First blood" << endl;
			break;
		}
	}
	cout << "ǰ�������ĸ��䵥�ĵ��ˣ��������" << endl;
	while (1)
	{
		
		cout << "��ѡ�߹�����ʽ��0����ͨ������1������" << endl;
		cin >> y;
		switch (y) {
		case 0:cout << "����-100��ʣ������ֵ��" << ping_a(E2) << endl; break;
		case 1:cout << "����-200��ʣ������ֵ��" << Sword_ruling(E2) << endl; break;
		}
		if (E2 <= 0) {
			cout << "Double kill" << endl;
			break;
		}
		
	}
	cout << "�Է��غϣ��������-300 ��������ֵ��" << i - 300 << endl;
	while (1)
	{
		
		cout << "���Ļغϣ���ѡ�߹�����ʽ��0����ͨ������1������" << endl;
		cin >> y;
		switch (y) {
		case 0:cout << "����-100��ʣ������ֵ��" << ping_a(E2) << endl; break;
		case 1:cout << "����-200��ʣ������ֵ��" << Sword_ruling(E2) << endl; break;
		}
		cout << "�Է��غϣ���ͨ���� ��������ֵ��" << i - 10 << endl;
		if (E2 <= 0) {
			cout << "Triple kill" << endl;
			break;
		}

	}
	cout << "��������ѪҪ���ˣ��죬��ȥ�ո�" << endl;
	while (1)
	{

		cout << "��ѡ�߹�����ʽ��0����ͨ������1���ս�" << endl;
		cin >> y;
		switch (y) {
		case 0:cout << "����-100��ʣ������ֵ��" << ping_a(E2) << endl; break;
		case 1:cout << "����-200��ʣ������ֵ��" << Sword_ruling(E2) << endl; break;
		}
		if (E2 <= 0) {
			cout << "Quadra kill" << endl;
			cout << "Penta kill" << endl;
			cout << "Ace" << endl;
			break;
		}

	}
	cout << "Victory" << endl;
	return 0;
}
inline int ping_a(int &a)
{
	a -= 100;
	return a;
}