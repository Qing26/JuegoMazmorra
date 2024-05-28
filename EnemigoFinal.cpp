#include "EnemigoFinal.h"
#include <iostream>
using namespace std;

EnemigoFinal::EnemigoFinal(int pHp, std::string pName, int pAttack,int pPosX,int pPosY, int pDefense, int pUltimate) :
	Personaje(pHp, pName, pAttack, pPosX, pPosY) {
	defense = pDefense; ultimate = pUltimate;
}

//SET
void EnemigoFinal::setDefense(int pDefense)
{
	defense = pDefense;
}

void EnemigoFinal::setUltimate(int pUltimate)
{
	ultimate = pUltimate;
}

//GET
int EnemigoFinal::getDefense() {
	return defense;
}
int EnemigoFinal::getUltimate()
{
	return ultimate;
}
void EnemigoFinal::printStats()
{
	cout << "El nombre del enemigo final es " << getName() << endl;
	cout << "La vida del enemigo final es " << getHp() << endl;
	cout << "El ataque normal del enemigo final es " << getAttack() << endl;
	cout << "La defensa del enemigo final es " << getDefense() << endl;
}
