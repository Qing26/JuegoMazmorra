#include "Personaje.h"

Personaje::Personaje(int pHp, int pAttack, std::string pName, int pPosX, int pPosY)
{
	hp = pHp;
	name = pName;
	attack = pAttack;
	posX = pPosX;
	posY = pPosY;
}

//Get
int Personaje::getHp()
{
	return hp;
}

std::string Personaje::getName()
{
	return std::string();
}

int Personaje::getAttack()
{
	return attack;
}

int Personaje::getPosX()
{
	return posX;
}

int Personaje::getPosY()
{
	return posY;
}

//Set
void Personaje::setHp(int pHp)
{
	hp = pHp;
}

void Personaje::setName(std::string pName)
{
	name = pName;
}

void Personaje::setAttack(int pAttack)
{
	attack = pAttack;
}

void Personaje::setPosX(int pPosX)
{
	posX = pPosX;
}

void Personaje::setPosY(int pPosY)
{
	posY = pPosY;
}

void Personaje::printStatus()
{
	std::cout << "El nombre del enemigo es " << getName() << " y tiene una vida de  " << getHp() << std::endl;
}


