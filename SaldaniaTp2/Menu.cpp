#include<iostream>
int
main ()
{
  int menu = 0, opcion = 0, graficos = 3, sonido = 0, salir;
  std::cout << "Menu:" << std::endl;
  do
    {
      std::cout << "1.Jugar/2.Opciones/3.Salir" << std::endl;
      std::cin >> menu;


      switch (menu)
	{
	case 1:
	  std::cout << "Que comienzen los juegos..." << std::endl;
	  return 0;
	  break;

	case 2:
	  do
	    {
	      std::cout << "1.Grafico/2.Sonido" << std::endl;
	      std::cin >> opcion;
	    }
	  while (opcion >= 3 || opcion <= 0);
	  switch (opcion)
	    {
	    case 1:
	      do
		{
		  std::cout << "valor actual " << graficos << std::endl;
		  std::cout << "1.Alto/2.Mediano/3.Bajo" << std::endl;
		  std::cin >> graficos;
		}
	      while (graficos >= 4 || graficos <= 0);
	      menu = 0;
	      break;
	    case 2:
	      std::cout << "valor actual " << sonido << std::endl;
	      std::cout << "2.Elija un valor entre 1 a 100" << std::endl;
	      std::cin >> sonido;
	      menu = 0;
	      while (sonido < 0 || sonido > 100)
		{
		  std::cout << "2.Elija un valor entre 1 a 100" << std::endl;
		  std::cin >> sonido;
		}
	      break;
	    }
	  break;

	case 3:
	  do
	    {
	      std::cout << "1.yes/2.no" << std::endl;
	      std::cin >> salir;
	      if (salir == 2)
		{
		  menu = 0;
		}
	    }
	  while (salir >= 3 || salir <= 0);
	  break;
	}


    }
  while (menu >= 4 || menu <= 0);
  return 0;
}
