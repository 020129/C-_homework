#include <iostream>
#include "4�ϻ�.h"
using namespace std;
Game::Game(int LP, int PhysicResistance, int MagicResistance, int AttackFrequency)
{
	g1 = LP; g2 = PhysicResistance; g3 = MagicResistance; g4 = AttackFrequency;
}
void Game::showGame()
{
	cout << "��������Ѫ��:" << g1 << endl;
	cout << "��������������:" << g2 << endl;
	cout << "��������ħ������:" << g3 << endl;
	cout << "�������Ĺ���Ƶ��:" << g4 << endl;
}
void Game::Fight()
{
	g1 = g1 - 500;
}
Game::~Game()
{
	cout << "�����������������" << endl;
	cout << "�÷�������������������" << endl;
	cout << "�÷�������������������" << endl;
	cout << "�÷�����������������������Ҫ������˵���飩" << endl;
};