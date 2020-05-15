/*#include<iostream>
#include<stdio.h>
int
main()
{
    float vida, escudo, danio;
    float vidaEne = 20.0f, danioEne = 5.0f;
    int oro=0,menu;

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
                oro += 1500;
                std::cout << "gano el jugador" <<oro<<" Oro"<< std::endl;
            }
            else {
                std::cout << "gano el enemigo" << std::endl;
                std::cout << "Perdio el juego" << std::endl;
                return 0;
            }
        }
        if (oro >= 1500) {
            std::cout << "1-Combatir/2-Ganar el juego" << std::endl;
            std::cin >> menu;
        }
        else {
            std::cout << "1-Combatir/2-Retirarse" << std::endl;
            std::cin >> menu;
        }
        vidaEne = 20;
        suma=vida+escudo;
        std::cout << "Turno " << contador << std::endl;
        std::cout << "Jugador: " << suma << "/ Enemigo:" << vidaEne << std::endl;
    }
    return 0;
}*/