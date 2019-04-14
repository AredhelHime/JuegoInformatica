#include<iostream>
#include<string>

using namespace std;

int main()
{
	//strings
	string name;

	//int
	int opcion = 0;
	int intentos = 0;
	int limiteIntentos = 3;

	//float
	float inputUsuario = 0.00;
	float pi = 3.14;

	//enums
	enum {
		menu, inicio, ayudarAthor, abrirPuertaEspada, puertaGuardia, alcantarilla, ladoLuzSinAthor, ladoLuzConAthor, ladoOscuroConAthor, ladoOscuroSinAthor, pelearUndeadSolo, huirUndead, sumergir, primerPisoConAthor, primerPisoSinAthor, mazmorraAthor, juegoPuerta, finDeCapituloUno, juegoAthor, juegoProta, badEnding, fin
	} estadoJuego;

	estadoJuego = menu;

	//bools
	bool volverAJugar = true;
	bool athor = true;
	bool mizuki = false;
	bool shield = false;
	bool steelSword = false;
	bool undead = true;
	bool perdistePi = false;

	while (volverAJugar)
	{

		switch (estadoJuego)
		{

		case menu:
			system("cls");
			
			cout << "                     Aventura conversacional" << endl;
			//desarrollar mejor la historia
			//for (long int i = 0; i < 2000000000; i++); 
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
			cout << "Vos:\n1. Decidis ayudarlo.\n2. Decidis abandonarlo a su suerte." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				athor = 1;
				estadoJuego = ayudarAthor;
			}
			else
			{
				system("cls");
				cout << "Abandonas al anciano, y te diriges con calma hacia la puerta. Subis unas escaleras y al subir ves a un guardia, el guardia te ve y moriste pff" << endl;
				system("pause");
				estadoJuego = badEnding;
			}
			break;

		case ayudarAthor:
			system("cls");
			cout << "Abris la puerta del anciano y juntos se van juntos al primer piso" << endl;
			cout << "Al subir se asoman y notan que hay tres puertas y un guardia entrando a la tercera" << endl;
			cout << "Terminan de subir y le preguntas al anciano su nombre" << endl;
			cout << "-Mi nombre es Athor, joven. Y tu te llamas?\n" << "-" << name << " - Le respondes.\nA continuacion el anciano prueba abrir la primer puerta pero descubre que esta cerrada. " << endl;
			cout << "Tu decides:\n1. Abrir la segunda puerta.\n2. Te dirigis a la tercer puerta." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				estadoJuego = abrirPuertaEspada;

			}
			else {

				system("cls");
				cout << "Abris la puerta y antes de salir, Athor trata de pararte.Pero vos, super confiado, salis igual y pateas la tercer puerta\nNi bien entras un flechazo atraviesa tu ojo, y, al ver a Athor super asustado.Lo lleva de nuevo a las celdas." << endl;
				system("pause");
				estadoJuego = badEnding;
			}
			break;

		case abrirPuertaEspada:
			system("cls");

			cout << "Abris la segunda puerta y encontras una espada de madera sobre una mesa y una escotilla en el suelo." << endl;
			cout << "1. Volves atras a Enfrentarte al guardia de la tercer puerta\n2. Abris la escotilla y bajas." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				system("cls");
				cout << "Abris la puerta y antes de salir, Athor trata de pararte.Pero vos, super confiado, salis igual y pateas la tercer puerta\nNi bien entras un flechazo atraviesa tu ojo, y, al ver a Athor super asustado.Lo lleva de nuevo a las celdas." << endl;
				system("pause");
				estadoJuego = badEnding;
			}
			else
				estadoJuego = alcantarilla;

			break;

		case alcantarilla:
			system("cls");
			cout << "Junto a Athor, bajas a la alcantarilla y te encuentras con dos posibles caminos." << endl;
			cout << "Hacia un lado, ves como el camino se profundiza envuelvo en oscuridad," << endl;
			cout << "del otro, puedes llegar a ver el reflejo de una antorcha. Tu volteas hacia Athor y dices:\n" << endl;
			cout << "1. - Exploremos la alcantarilla!. \n2. - Puedo ver una luz a lo lejos..." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				estadoJuego = ladoOscuroConAthor;
			}
			else
			{
				estadoJuego = ladoLuzConAthor;
			}
			break;


		case ladoOscuroConAthor:

			system("cls");
			cout << "- Creo que la salida esta por aqui.- dices con total seguridad." << endl;
			cout << "aunque esceptico, Athor decide seguirte mientras te adentras en la penumbra." << endl;
			cout << "A lo lejos, comienzas a huir ruidos, un cuerpo lentamente acercandose," << endl;
			cout << "el olor a pudredumbe te llega mucho antes que la figura que lo emanaba." << endl;
			cout << "Antes de que pudieras reaccionar, un Undead aparece y agarra a Athor. " << endl;
			cout << "- No te preocupes por mi!- grita,- Corre!.\nTu: \n" << endl;
			cout << "1. Te armas de valor y peleas.\n2. Huyes y abandonas a Athor." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				system("cls");
				cout << "Tratas de pelear, pero el undead te mata." << endl;
				system("pause");
				estadoJuego = badEnding;
			}
			else
			{
				system("cls");
				cout << "Huyes despavorido. Athor muere." << endl;
				athor = false;
				estadoJuego = ladoLuzSinAthor;
			}
			break;

		case ladoLuzSinAthor:

			system("cls");
			cout << "Luego de abandonar a Athor a su suerte, te encontras con agua." << endl;
			cout << "\n1. Te sumerges,\n2. Nadas." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				estadoJuego = sumergir;
			}

			else
			{
				estadoJuego = primerPisoSinAthor;
			}
			break;

		case sumergir:
			cout << "Te sumergis, encontras un escudo." << endl;
			shield = true;
			system("pause");
			if (athor == true && shield == true)
			{
				estadoJuego = mazmorraAthor;
			}
			else
			{
				estadoJuego = primerPisoSinAthor;
			}
			break;

		case primerPisoSinAthor:
			system("cls");
			cout << "Llegas al primer piso, solo, y no tenes llave." << endl;
			cout << "Decides regresar." << endl;
			system("pause");
			estadoJuego = pelearUndeadSolo;
			break;

		case pelearUndeadSolo:
			athor = false;
			if (shield == true)
			{
				cout << "Te volves a enfrentar al undead y le ganas. Decides ir a por el guardia." << endl;
				steelSword = true;
				system("pause");
				estadoJuego = puertaGuardia;

			}
			else
			{
				cout << "Esta vez no logras escapar y el undead te mata." << endl;
				system("pause");
				estadoJuego = badEnding;
			}
			break;

		case puertaGuardia:
			if (athor == true && shield == true)
			{
				cout << "Abres la puerta, el guardia te tira un flechazo pero tu logras protegerte con el escudo." << endl;
				cout << "Acto seguido, con un movimiento de tu espada logras derrotarlo." << endl;
				cout << "Del cuerpo sin vida del guardia, Athor agarra el carcaj y el arco.\n" << endl;
				cout << "- Yo solia ser el guardia real- dijo una vez se calzó el carcaj en la espalda - sigamos." << endl;
				cout << "Del cinturon del guardia, tu sacas una llave, supones que es la del primer piso." << endl;
				system("pause");
				estadoJuego = juegoPuerta;
			}
			else
			{
				system("cls");
				cout << "Lo matas y te vas solo al primer piso." << endl;
				system("pause");
				estadoJuego = juegoPuerta;
			}
			break;


			//////////LADO LUZ 

		case ladoLuzConAthor:
			system("cls");
			cout << "-Vamos hacia la luz." << endl;
			cout << "Luego de recorrer se encuentran con un lago que divide el camino" << endl;
			cout << "1. - Nademos hacia el otro lado.\n2. - Voy a sumergirme a ver que encuentro." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				system("cls");
				cout << "-Nademos a ver que nos encontramos.\nAl cruzar se encuentran con una puerta y unas escaleras que llevan al primer piso." << endl;
				cout << "Al ver que no hay salida por ese lugar deciden volver e investigar el lado oscuro." << endl;
				cout << "A lo lejos, comienzas a oir ruidos, un cuerpo lentamente acercandose," << endl;
				cout << "el olor a pudredumbe te llega mucho antes que la figura que lo emanaba." << endl;
				cout << "Antes de que pudieras reaccionar, un Undead aparece y agarra a Athor. " << endl;
				cout << "- No te preocupes por mi!- grita,- Corre!\nTu: \n" << endl;
				cout << "1. Te armas de valor y peleas.\n2. Huyes y abandonas a Athor." << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					system("cls");
					cout << "Tratas de pelear, pero el undead te mata." << endl;
					system("pause");
					estadoJuego = badEnding;
				}
				else
				{
					system("cls");
					cout << "Huyes despavorido. Escuchas los gritos desgarradores de Athor. Logras agarrar la escalera y volver a subir.\n\nAl subir notas que los gritos de Athor alertaron al guardia que apuntandote con el arco te atraviesa el ojo y te mata" << endl;
					system("pause");
					estadoJuego = badEnding;
				}
			}
			else
			{
				estadoJuego = sumergir;
			}
			break;

		case mazmorraAthor:
			system("cls");
			cout << "Al volver pensas que podes ir al lado de la oscuridad pero Athor te hace acordar del Guardia que hay arriba\nVos: " << endl; //Darth Vader Intensifies
			cout << "\n1. Decidis seguir al lado oscuro.\n2. Le haces caso a Athor." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				system("cls");
				cout << "Decidis ir al lado oscuro. " << endl;
				cout << "A lo lejos, comenzas a oir ruidos y un cuerpo lentamente acercandose," << endl;
				cout << "el olor a pudredumbe te llega mucho antes que la figura que lo emanaba." << endl;
				cout << "Antes de que pudieras reaccionar, un Undead aparece y agarra a Athor. " << endl;
				cout << "- No te preocupes por mi!- grita,- Corre!.\nTu: \n" << endl;
				cout << "1. Huyes y abandonas a Athor.\n2. Te armas de valor y peleas." << endl;
				cin >> opcion;
				system("pause");
				if (opcion == 1)
				{
					system("cls");
					cout << "Huis y abandonas a Athor" << endl;
					cout << "Subis a la planta baja y entras a la tercer puerta para enfrentarte al guardia.\nEl guardia te tira una flecha pero con el escudo logras pararlo.\n" << endl;
					cout << "Golpeas al guardia con el escudo y ves una llave en su cinturon, la agarras, y salis corriendo hacia la mazmorra." << endl;
					cout << "Ves al Undead comiendo pedazos de Athor y se da cuenta de que estas ahi.\n Corres hasta donde esta el agua, saltas y nadas." << endl;
					cout << "Luego subis por las escaleras y te das cuenta que la llave que tenes no es la del primer piso.\nTe das vuelta y ves al Undead mirandote fijamente. F MORIS" << endl;
					system("pause");
					estadoJuego = badEnding;
				}
				else
				{
					system("cls");
					cout << "Te enfrentas al Undead, el con su espada te intenta atacar, pero vos con el escudo lo paras\nCon tu espada logras derrotarlo, salvas a Athor y agarras la espada del Undead." << endl;//espada buena
					cout << "Athor agradecido te indica de subir a tomar un respiro y atacar al guardia.\nAl entrar a la tercer puerta el guardia desprevenido con el arco logra tirarte una flecha pero con el escudo logras pararla" << endl;
					cout << "Atacas al Guardia y logras derribarlo. Tu consigues la llave para entrar al tercer piso que se encontraba en la mesa" << endl;
					cout << "Del cuerpo sin vida del guardia, Athor agarra el carcaj y el arco." << endl;
					cout << "- Yo solia ser el guardia real- dijo una vez se calzó el carcaj en la espalda - sigamos." << endl;
					cout << "Del cinturon del guardia, Athor saca otra llave. - Esta llave es la que abre la primer puerta! Veamos que se esconde ahi!" << endl;
					mizuki = true;
					steelSword = true;
					system("pause");
					system("cls");
					cout << "Al abrir la puerta, pueden observar a una mujer prisionera\nAthor le pregunta si esta bien y como es su nombre\n-Mizuki - Responde." << endl;
					cout << "Luego de salvar a la joven muchacha. Se dirigen hacia el primer piso.\nAthor dijo - No se nos tenia permitido subir al primer piso. Solo teniamos que hacer guardia y no preguntar.";
					estadoJuego = juegoPuerta;
				}
			}
			else
			{
				system("cls");
				cout << "FFFFFFF" << endl;
				system("pause");
				estadoJuego = badEnding;
			}
			system("pause");
			break;

		case juegoPuerta:
			system("cls");
			cout << R"(
       88888888888888888888888888888888888888888
      8888888888888888888888888888888888888888888
  8888888888888888888888888888888888888888888888 
 88888888      88888        88888                
888            88888        88888                
              888888        88888                 
              888888        888888               
              888888        888888               
             8888888         888888              
             8888888         8888888             
             8888888         8888888             
            88888888         88888888            
           88888888          888888888           
           88888888          888888888           
         888888888           88888888888           
        8888888888           888888888888        
       8888888888             88888888888        
       8888888888              888888888         
        8888888                 8888888          
			)" << endl;
			cout << "Al subir se encuentran con un gran símbolo." << endl;

			while (pi != inputUsuario && !perdistePi)
			{
				if (intentos < limiteIntentos)
				{
					cout << "El codigo es: " << endl;
					cin >> inputUsuario;
					intentos++;
				}
				else
				{
					perdistePi = true;
				}
			}//fin del while de pi
			if (perdistePi)
			{
				cout << "Te moriste!" << endl;
				system("pause");
				estadoJuego = badEnding;

			}
			else
			{
				cout << "ganaste!" << endl;
				system("pause");
				estadoJuego = finDeCapituloUno;
			}
			break;
		
		case finDeCapituloUno:
			system("cls");
			cout << "LLEGAMOS AL FINAL DE ESTA PEQUENIA INSTANCIA." << endl;
			system("pause");
			break;


		case juegoAthor:

		case badEnding:
			system("cls");
			cout << "Estas muerto\n. Quieres volver a intentar?\n1. Si.\n2. No." << endl;
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