#pragma once
#include <iostream>
class Personaje
{
private:
	int hp;
	std::string name;
	int attack;
	int posX;
	int posY;
public:
	Personaje(int pHp, int pAttack, std::string pName, int pPosX, int pPosY);
	//getters
	int getHp();

	std::string getName();

	int getAttack();
	int getPosX();
	int getPosY();
	//setters
	void setHp(int pHp);

	void setName(std::string pName);

	void setAttack(int pAttack);
	void setPosX(int pPosX);
	void setPosY(int pPosY);
	//metodos propios

	void printStatus();
};