#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	float vida = 075.0f, inicialVida = 75.0f, inicialEscudo = 20.0f, escudo = 20.0f, cura = 0;
	int powerUp = 0;
	int damagePlayer = 20.0f;
	int oro = 0, item, menus = 0;
	int valorItem = 0;
	int numRan = 0, seleccion = 0;
	srand(time(NULL));
	enum class MENU { COMBATIR = 1, RETIRARSE, SHOP, GANARELJUEGO };
	MENU menu = MENU::COMBATIR;

	//Enemigos
	//weak enemy
	int weakEnemyHP = 50;
	int weakEnemyD = 15;
	int goldWeakE = 100;
	//Hard enemy
	int hardEnemyHP = 100;
	int hardEnemyD = 25;
	int goldHardE = 200;
	int enemyDamage;
	int enemyGold;
	int enemyLife;
	int enemyType;
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
		enemyType = rand() % (3 - 1) + 1;
		switch (enemyType)
		{
		case 1:
			enemyLife = weakEnemyHP;
			enemyDamage = weakEnemyD;
			enemyGold = goldWeakE;
			break;
		case 2:
			enemyLife = hardEnemyHP;
			enemyDamage = hardEnemyD;
			enemyGold = goldHardE;
			break;
		}
		std::cout << "Enemigo encontrado ";
		switch (enemyType)
		{
		case 1:
			std::cout << "Enemigo Debil, su recompensa es de " << goldWeakE << std::endl;
			break;
		case 2:
			std::cout << "Enemigo Fuerte, su recompensa es de " << goldHardE << std::endl;
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

				vida += escudo;
				vida -= enemyDamage;
				enemyLife -= damagePlayer;
				escudo -= enemyDamage;
				if (escudo <= 0) {
					std::cout << "Jugador: " << vida << " /Escudo: 0" << " /Danio hecho:" << damagePlayer
						<< "/ Enemigo: " << enemyLife << std::endl;
				}
				else {
					std::cout << "Jugador: " << vida << " /Escudo:" << escudo << " /Danio hecho:" << damagePlayer
						<< "/ Enemigo: " << enemyLife << std::endl;
				}
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
			std::cin >> item;
			valorItem = rand() % (3 - 1) + 1;
			if (valorItem == 1) {
				valorItem = 30 + 15;
			}
			else
			{
				valorItem = 30 - 15;
			}

			switch (item) {
			case 1:
				std::cout << "Vida actual " << vida << std::endl;
				cura = 25;
				std::cout << "1-Posicion de vida...\n cura" << cura << " cantidad de vida" << std::endl;
				std::cout << valorItem << " $" << std::endl;


				oro -= valorItem;
				if ((vida + cura) > inicialVida) {
					vida = inicialVida;
				}
				else {
				}
				break;

			case 2://Escudo
				std::cout << "2-Reparar armadura...\n restablece nuestro escudo" << std::endl;
				std::cout << valorItem << "$" << std::endl;

				oro -= valorItem;
				if (escudo < inicialEscudo) {
					escudo = inicialEscudo;
				}
				break;
			case 3:
				std::cout << "3-Scroll de danio...\n Permite subir el danio entre 1-5" << std::endl;
				std::cout << valorItem << "$";
				oro -= valorItem;
				powerUp = rand() % (6 - 1) + 1;
				damagePlayer += 5;
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
