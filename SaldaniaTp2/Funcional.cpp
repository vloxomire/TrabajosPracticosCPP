/*#include<iostream>
#include<stdio.h>
int
main()
{
    float vida, escudo, danio;
    float vidaEne = 20.0f, danioEne = 5.0f;

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
    std::cout << "Jugador: " << suma << "/ Enemigo:" << vidaEne << std::endl;
    system("pause");
    while (vidaEne > 0 && suma > 0)
    {
        system("cls");
        contador++;
        suma -= danioEne;
        vidaEne -= danio;
        std::cout<<"Turno "<<contador<<std::endl;
        std::cout << "Jugador: " << suma << "/ Enemigo: " << vidaEne << std::endl;
        system("pause");
    }
    if (suma <= 0 && vidaEne <= 0) {
        std::cout << "Empate" << std::endl;
    }
    else {
        if (suma > vidaEne) {
            std::cout << "gano el jugador" << std::endl;
        }
        else {
            std::cout << "gano el enemigo" << std::endl;
        }
    }
    return 0;
}*/