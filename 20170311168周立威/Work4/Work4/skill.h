#ifndef SKILL_H
#define SKILL_H
#include<iostream>
class character;


//skill1 ֻ��������˺�

class skill1 {
private:
	int damage;
public:
	skill1();
	void skill(character* bearer);
	void skill(character* bearer1,character* bearer2);
};
//skill2�����Σ�һ��λ�Ƽ������˺���һ�δ����˺�
class skill2 {
private:
	int damage1, damage2, x, y;
	bool choice = true;
public:
	skill2();
	bool skill(character* bearer, character* user, bool choice);
	bool skill(character* bearer1, character* bearer2, character* user, bool choice);
};
//skill3ʹ�ú�ʹ�Է�����λ�ƣ�����������˺�,����������Ѫ��
class skill3 {
private:
	int damage, doc, x, y;
public:
	skill3();
	void skill(character* bearer, character* user);
	void skill(character* bearer1,character* bearer2, character* user);
};


#endif SKILL_H