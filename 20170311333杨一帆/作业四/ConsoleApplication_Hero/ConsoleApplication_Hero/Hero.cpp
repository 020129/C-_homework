#include"Hero.h"
Hero::Hero()
{
	cout <<"this is a defult consturctor"<<endl;
	cout << "Ӣ�ۣ������" << endl;
	cout << "����һ��Dongfengpo" << endl;
	cout << "���ܶ���Tujin" << endl;
	cout << "��������Yuanqidan" << endl;
	skill1=1000;
	skill2=500;
	skill3=2000;
}
Hero::Hero(int num,int hurt,string s,int hero_blood,
		float hero_orign_x,float hero_orign_y,int x1,int x2,int x3)
{
	cout <<"this is a overload consturctor"<<endl;
	skill1=x1;
	skill2=x2;
	skill3=x3;
}
Hero::Hero(const Hero & name)
{
	cout <<"this is a copy consturctor"<<endl;
	skill1=name.skill1;
	skill2=name.skill2;
	skill3=name.skill3;
}
Hero ::~Hero()
{
	cout <<"this is a  desturctor"<<endl;
	cout << "����������ѱ����" << endl;
}
Hero & Hero::operator=(const Hero & rhs)
{
	if (this==&rhs)
	{
		return *this;
	}
	this->skill1=rhs.skill1;
	this->skill2=rhs.skill2;
	this->skill3=rhs.skill3;
	return *this;
}
void Hero::showskill()
{
	cout <<"����һ"<<skill1<<endl;
	cout <<"���ܶ�"<<skill2<<endl;
	cout <<"������"<<skill3<<endl;
}
int Hero::use_skill1(int num)
{
	if (num == 2)
	{
		return 500;
	}
	if (num == 1)
	{
		return 1000;
	}
}
/*int Hero::use_skill2(float hero_orign_x, float hero_orign_y)
{
	if (num == 2)
	{
		return 500;
	}
	if (num == 1)
	{
		return 1000;
	}
}
*/