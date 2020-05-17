#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	float vida = 25.0f, escudoInicial = 35.0f, danio = 15.0f;
	float vidaEne, danioEne = 15.0f, escudo;
	int oro = 0, menu, item, valorItem = 0;
	int numRan;
	float suma = 0.0f;
	escudo = escudoInicial;
	enum class OBJECT { POTION = 1, REPAIRSHIELD, SCROLLPOWER };
	OBJECT object = OBJECT::REPAIRSHIELD;
	enum class COMBATE {COMBATIR=1,RETIRARSE};
	COMBATE combate = COMBATE::COMBATIR;
	srand(time(NULL));


	//Combate
	int contador = 0;
	std::cout << "Combate" << std::endl;
	do {
		std::cout << "(1)Combatir o (2)Retirarse" << std::endl;
		std::cin >> menu;
		combate = (COMBATE)menu;
		switch (combate)
		{
		case COMBATE::COMBATIR:
			break;
		case COMBATE::RETIRARSE:
			vida = 0;
			break;
		default:
			break;
		}while (combate>2||combate<1);
	}
	return 0;
}