/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int
main()
{
    float vida, inicialVida = 75.0f, inicialEscudo = 20.0f, escudo, cura = 0;
    int powerUp = 0;
    int damagePlayer = 20.0f;
    int oro = 0, menu, item;
    int valorItem = 0;
    int numRan = 0;


    srand(time(NULL));
    //variables inicializadas


    std::cout << "Ingrese la vida" << std::endl;
    std::cin >> inicialVida;
    std::cout << "Ingrese el escudo" << std::endl;
    std::cin >> inicialEscudo;
    escudo = inicialEscudo;
    vida = inicialVida;

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
    std::cin >> menu;
    while (menu == 1) {

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
        if (oro >= 1500) {
            std::cout << "1-Combatir/2-Ganar el juego/3-Shop" << std::endl;
            std::cin >> menu;
        }
        else {
            std::cout << "1-Combatir/2-Retirarse/3-Shop" << std::endl;
            std::cin >> menu;
        }
        //Shop
        if (menu == 3) {
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
                cura = 500;
                std::cout << "1-Posicion de vida...\n cura" << cura << " cantidad de vida" << std::endl;
                std::cout << valorItem << " $" << std::endl;
                menu = 1;

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
                menu = 1;
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
        }
    }
    return 0;
}*/
