#include<iostream>
#include<string>

using namespace std;

int main()
{
	//strings
	string name;

	//int
	int opcion = 0;

	//char
	char prueba = 'a';
	//enums
	enum {
		menu, inicio, ayudarViejo, escaparSolo, abrirPuertaEspada, abrirPuertaGuardia, fin
	} estadoJuego;
	
	estadoJuego = menu;

	//bools
	bool volverAJugar = true;

	while (volverAJugar)
	{
		
		switch (estadoJuego)
		{

			case menu:
				cout << "                     Aventura conversacional" << endl;
				//desarrollar mejor la historia

				cout << "Elige el nombre de tu aventurero: ";
				cin >> name;
				estadoJuego = inicio;
				break;

			case inicio:
				system("cls");
				cout << "Te encuentras en una celda. No recuerdas como llegaste ahi\nSolo recuerdas tu nombre: " << name << endl;
				cout << "Miras y ves que cerca tuyo el guardia que vigila las celdas esta dormido.\nVes una llave, deseando que sea la que abre tu celda" << endl;
				cout << "Agarras la llave y logras salir" << endl;
				cout << "Afuera ves un anciano encerrado y otra llave en el guardia dormido" << endl;
				cout << "El pobre hombre te mira implorando ayuda" << endl;
				cout << "Vos:\n1: Decidis ayudarlo\n2: Decidis abandonarlo a su suerte" << endl;
				cin >> opcion;

				if (opcion == 1)
				{
					estadoJuego = ayudarViejo;
				}
				else
				{
					system("cls");
					cout << "Abandonas al anciano, y te diriges con calma hacia la puerta. Subis unas escaleras y al subir ves a un guardia, el guardia te ve y moriste pff" << endl;
					estadoJuego = escaparSolo;
				}
				break;

			case ayudarViejo:
				system("cls");
				cout << "Abris la puerta del anciano y juntos se van juntos al primer piso" << endl;
				cout << "Al subir se asoman y notan que hay tres puertas y un guardia entrando a la tercera" << endl;
				cout << "Terminan de subir y le preguntas al anciano su nombre" << endl;
				cout << "-Mi nombre es Athor, joven. Y tu te llamas?\n" << "-" << name << " - Le respondes.\nA continuacion el anciano prueba abrir la primer puerta pero descubre que esta cerrada. " << endl;
				cout << "Tu decides:\n1: Abrir la segunda puerta.\n2: Te dirigis a la tercer puerta sabiendo que se encuentra un guardia en ella." << endl;
				cin >> opcion;

				if (opcion == 1)
					estadoJuego = abrirPuertaEspada;
				else
				{
					cout << "Abris la puerta y antes de salir, Athor trata de pararte.Pero vos, super confiado, salis igual y pateas la tercer puerta\nNi bien entras un flechazo atraviesa tu ojo, y, al ver a Athor super asustado.Lo lleva de nuevo a las celdas." << endl;
					estadoJuego = abrirPuertaGuardia;
				}
				break;

			case abrirPuertaEspada:
				system("cls");
				cout << "Abris la segunda puerta y encontras una espada de madera sobre una mesa y una escotilla en el suelo." << endl;
				cout << "1: Volves atras a Enfrentarte al guardia de la tercer puerta\n2: Abris la escotilla y bajas" << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					cout << "Super orgulloso de tus habilidades te dirigis a la tercer puerta y al abrir el guardia te pega, mata a Athor y luego te mata a ti" << endl;
					estadoJuego = fin;
				}
				else
					estadoJuego = fin;
				break;

			case fin:
				cout << "Estas muerto\n. Quieres volver a intentar?\n1) si.\n2 no." << endl;
				cin >> opcion;

				if (opcion == 1)
				{
					estadoJuego = menu;
				}

				else
				{ 
					cout << "Nos re vimos" << endl;
					volverAJugar = false;
				
				}

			break;

		} //fin del switch
		
	} //fin del while
	
	system("pause");
	return 0;
	}