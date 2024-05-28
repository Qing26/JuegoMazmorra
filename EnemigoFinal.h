#pragma once
#include "Personaje.h"
#include <iostream>

class EnemigoFinal : public Personaje
{
	private:
		int defense;
		int ultimate;
	public:
		//Constructor
		EnemigoFinal(int pHp, std::string pName, int pAttack,int pPosX, int pPosY, int defense, int ultimate);
		//GET
		int getDefense();
		int getUltimate();
		//SET
		void setDefense(int pDefense);
		void setUltimate(int pUltimate);
		void printStats();
};
