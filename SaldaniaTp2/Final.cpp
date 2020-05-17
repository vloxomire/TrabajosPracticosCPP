#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	float vida = 100.0f, inicialVida = 100.0f, inicialEscudo = 50.0f, escudo = 50.0f, cura = 0;
	int powerUp = 0;
	int damagePlayer = 35.0f;
	int oro = 0, item, menus = 0;
	int valorItem = 0;
	int numRan = 0, seleccion = 0;
	int aux = 0;
	int restoDanioEne = 0;
	int enemyRandom = 0;
	srand(time(NULL));
	enum class MENU { COMBATIR = 1, RETIRARSE, SHOP, GANARELJUEGO };
	MENU menu = MENU::COMBATIR;

	enum class OBJECT { POTION = 1, SHIELD, SCROLL };
	OBJECT object = OBJECT::POTION;

	enum class ENEMYTYPE { WEAK = 1, HARD };
	ENEMYTYPE enemytype = ENEMYTYPE::WEAK;

	enum class SHIELD { ACTIVE = 1, DESACTIVE };
	SHIELD shield = SHIELD::ACTIVE;

	//Enemigos
	//weak enemy
	int weakEnemyHP = 50;
	int weakEnemyD = 15;
	int goldWeakE = 500;
	//Hard enemy
	int hardEnemyHP = 100;
	int hardEnemyD = 20;
	int goldHardE = 1000;
	int enemyDamage;
	int enemyGold;
	int enemyLife;
	//Combate
	int contador = 0;




	std::cout << "Combate" << std::endl;
	std::cout << "1-Combatir/2-Retirarse" << std::endl;
	do {
		if (oro >= 1500) {
			std::cout << "1-Combatir/2-Ganar el juego/3-Shop" << std::endl;
		}
		else {
			if (contador > 1) {
				std::cout << "1-Combatir/2-Retirarse/3-Shop" << std::endl;
			}
		}
		//generador de tipo de enemigo
		enemyRandom = rand() % (3 - 1) + 1;
		enemytype = (ENEMYTYPE)enemyRandom;
		std::cout << "Enemigo encontrado ";
		switch (enemytype)
		{
		case ENEMYTYPE::WEAK:
			std::cout << "Enemigo Debil, su recompensa es de " << goldWeakE << std::endl;
			enemyLife = weakEnemyHP;
			enemyDamage = weakEnemyD;
			enemyGold = goldWeakE;
			break;
		case ENEMYTYPE::HARD:
			std::cout << "Enemigo Fuerte, su recompensa es de " << goldHardE << std::endl;
			enemyLife = hardEnemyHP;
			enemyDamage = hardEnemyD;
			enemyGold = goldHardE;
			break;
		}

		std::cin >> seleccion;
		menu = (MENU)seleccion;
		switch (menu)
		{
		case MENU::COMBATIR:

			while (enemyLife > 0 && vida > 0)
			{
				system("pause");
				system("cls");
				contador++;
				numRan = rand() % (51 - 1) + 1;
				damagePlayer = numRan;
				std::cout << "Turno " << contador << std::endl;

				escudo -= enemyDamage;
				if (escudo <= 0) {
					aux = 2;
					shield = (SHIELD)aux;
				}
				else {
					aux = 1;
					shield = (SHIELD)aux;
				}

				switch (shield)
				{
				case SHIELD::ACTIVE:
					restoDanioEne = escudo - enemyDamage;
					vida -= restoDanioEne;

					break;
				case SHIELD::DESACTIVE:
					vida = vida - enemyDamage;
					break;
				default:
					break;
				}

				enemyLife -= damagePlayer;

				std::cout << "Jugador: " << vida << " /Escudo:" << escudo << " /Danio hecho:" << damagePlayer
					<< "/ Enemigo: " << enemyLife << std::endl;
			}
			if (vida <= 0 && enemyLife <= 0) {
				std::cout << "Empate" << std::endl;
				std::cout << "Perdio el juego" << std::endl;
				return 0;
			}
			else {
				if (vida > enemyLife) {

					oro += enemyGold;
					std::cout << "gano el jugador" << oro << " Oro" << std::endl;
				}
				else {
					std::cout << "gano el enemigo" << std::endl;
					std::cout << "Perdio el juego" << std::endl;
					return 0;
				}
			}
			break;
		case MENU::RETIRARSE:
			std::cout << "Se retira del juego";
			break;
		case MENU::SHOP:
			std::cout << "1-Posicion de vida/2-Reparar armadura/3-Scroll de danio" << std::endl;
			std::cout << "vida " << vida << " escudo " << escudo << " danio " << damagePlayer << std::endl;
			std::cin >> item;
			object = (OBJECT)item;
			valorItem = rand() % (3 - 1) + 1;
			if (valorItem == 1) {
				valorItem = 30 + 15;
			}
			else
			{
				valorItem = 30 - 15;
			}

			switch (object) {
			case OBJECT::POTION:
				std::cout << "Vida actual " << vida << std::endl;
				cura = 30;
				std::cout << "1-Posicion de vida...\n cura" << cura << " cantidad de vida" << valorItem << " $" << std::endl;


				oro -= valorItem;
				if ((vida + cura) > inicialVida) {
					vida = inicialVida;
					std::cout << "Vida actual " << vida << std::endl;
				}
				else {
					vida += cura;
					std::cout << "Vida actual " << vida << std::endl;
				}
				break;

			case OBJECT::SHIELD:
				std::cout << "2-Reparar armadura...\n restablece nuestro escudo" << std::endl;
				std::cout << valorItem << "$" << std::endl;

				oro -= valorItem;
				if (escudo < inicialEscudo) {
					escudo = inicialEscudo;
				}
				std::cout << " escudo " << escudo << std::endl;
				break;
			case OBJECT::SCROLL:
				std::cout << "3-Scroll de danio...\n Permite subir el danio entre 1-5" << std::endl;
				std::cout << valorItem << "$";
				oro -= valorItem;
				powerUp = rand() % (6 - 1) + 1;
				damagePlayer += powerUp;
				std::cout << " danio " << damagePlayer << std::endl;
				break;
			}
			break;
		case MENU::GANARELJUEGO:
			break;
		default:
			break;
		}

	} while (seleccion != 2 && seleccion != 4);
}
