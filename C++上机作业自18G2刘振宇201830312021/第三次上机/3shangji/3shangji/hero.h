#include<iostream>
using namespace std;

class Hero
{
public://����
	Hero();                          //���캯��
	Hero(int x1,int x2,int x3);
	Hero(const Hero & name);
	~Hero();                        //��������
	Hero &operator=(const Hero&rhs);//�Ⱥ����������   �ҵ�
	void showskill();
private://˽��
	int skill1;
	int skill2;
	int skill3;
};
