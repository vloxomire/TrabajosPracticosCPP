/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int
main()
{
    float vida, escudo, danio;
    float vidaEne = 20.0f, danioEne = 5.0f;
    int oro = 0, menu, item, valorItem;
    int numRan;

    srand(time(NULL));

    std::cout << "Ingrese la vida" << std::endl;
    std::cin >> vida;
    std::cout << "Ingrese el escudo" << std::endl;
    std::cin >> escudo;
    std::cout << "Ingrese el danio" << std::endl;
    std::cin >> danio;
    float suma = vida + escudo;
    //Combate
    int contador = 0;
    std::cout << "Combate" << std::endl;
    system("pause");
    std::cout << "1-Combatir/2-Retirarse" << std::endl;
    std::cin >> menu;
    while (menu == 1) {

        while (vidaEne > 0 && suma > 0)
        {
            system("pause");
            system("cls");
            contador++;
            std::cout << "Turno " << contador << std::endl;
            suma -= danioEne;
            vidaEne -= danio;
            std::cout << "Jugador: " << suma << "/ Enemigo: " << vidaEne << std::endl;
        }
        if (suma <= 0 && vidaEne <= 0) {
            std::cout << "Empate" << std::endl;
        }
        else {
            if (suma > vidaEne) {

                oro += rand() % 50 + 150;
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
        if (menu == 3) {
            std::cout << "1-Posicion de vida/2-Reparar armadura/3-Scroll de danio" << std::endl;
            std::cin >> item;
            switch (item) {
            case 1:
                valorItem = 1 + rand() % (3 - 1);
                if (valorItem == 1) {
                    valorItem = 30 + 15;
                }
                else
                {
                    valorItem = 30 - 15;
                }
                std::cout << "1-Posicion de vida...\n cura 100 cantidad de vida" << std::endl;
                std::cout << valorItem << "$" << std::endl;
                menu = 1;
                vida = 100 - suma;
                break;
            case 2:
                std::cout << "2-Reparar armadura...\n restablece nuestro escudo" << std::endl;
                std::cout << valorItem << "$";
                break;
            case 3:
                std::cout << "3-Scroll de danio...\n Permite subir el danio entre 1-5" << std::endl;
                std::cout << valorItem << "$";
                break;
            default:
                break;
            }
        }
        std::cout << "Turno " << contador << std::endl;
        std::cout << "Jugador: " << suma << "/ Enemigo:" << vidaEne << std::endl;
    }
    return 0;
}*/
