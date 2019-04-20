// Carballo Nahuel Nicolas
// Dorr Nicolas Ezequiel
// Tartaglia Giannina Florencia


#include<iostream>
#include<string>
#include<random>
#include<ctime>

using namespace std;

int main()
{
	//strings
	string name;

	//random
	default_random_engine seed(time(0));

	uniform_int_distribution<int> card1(1, 3);
	uniform_int_distribution<int> card2(1, 3);
	uniform_int_distribution<int> card3(1, 3);

	//int
	int opcion = 0;
	int intentos = 0;
	int limiteIntentos = 3;

	int respuesta = 0;
	int respuestasCorrectas = 0;
	int respuestasNecesarias = 3;

	int firstCard;
	int secondCard;
	int thirdCard;

	int firstValue = card1(seed);
	int secondValue = card2(seed);
	int thirdValue = card3(seed);

	//float
	float inputUsuario = 0.00;
	float pi = 3.14;

	//enums
	enum {
		startMenu, credits, playername, inicio, ayudarAthor, abrirPuertaEspada, alcantarilla, ladoLuzSinAthor, ladoLuzConAthor, ladoOscuroConAthor, ladoOscuroSinAthor, pelearUndeadSolo, huirUndead, primerPisoConAthor, primerPisoSinAthor, mazmorraAthor, puertaGuardiaSinAthor, puertaGuardiaConAthor, undeadVivo, undeadMizuki, primerDesafioAmbos, segundoDesafioMizuki, segundoDesafioAmbos, tercerDesafioMizuki, tercerDesafioAmbos, juegoAthor, juegoMizuki, preguntaUno, preguntaDos, preguntaTres, preguntaCuatro, preguntaCinco, finalDelDesafio, juegoProta,
		gameCard1, gameCard2, gameCard3, badEnding, finalSolo, finalConMizuki, finalConAthor, endGame, fin
	} estadoJuego;

	//chars
	char playMenu = '0';

	//bools
	bool volverAJugar = true;
	bool athor = true;
	bool steelSword = false;
	bool perdistePi = false;
	bool amuleto = false;
	bool rubiAthor = false;
	bool zafiroMizuki = false;

	estadoJuego = undeadVivo;

	while (volverAJugar)
	{

		switch (estadoJuego)
		{

		case startMenu:
			system("cls");

			cout << "                                      WHERE DARKNESS RELIES" << endl;
			cout << "(J)ugar" << endl;
			cout << "(C)reditos" << endl;
			cout << "(S)alir" << endl; //F
			cin >> playMenu;
			if (playMenu == 'j' || (playMenu == 'J'))
			{
				cout << "Como jugar:" << endl;
				cout << "Una vez que llegues a una toma de decisiones debes elegir un numero y presionar enter." << endl;
				cout << "Cuando ves el cursor titilando sin ninguna decision que escribir, debes presionar cualquiera tecla para continuar." << endl; //Homero: - Cual es tecla cualquiera? Ctrl PgUp....
				cout << "Por ejemplo:";
				system("pause > nul");
				estadoJuego = playername;
			}
			else if (playMenu == 'C' || (playMenu == 'c'))
			{
				estadoJuego = credits;
			}
			else if (playMenu == 's' || (playMenu == 'S'))
			{
				cout << "Gracias por jugar! Ahora, largo de mi propiedad.";

				system("pause > nul");
				return(0);
			}
			else
			{
				cout << "Letra incorrecta. Presione una tecla para volver al menu principal." << endl;
				system("pause > nul");
				estadoJuego = startMenu;
			}
			break;

		case playername:
			system("cls");
			cout << "Elige el nombre de tu aventurero: ";
			cin >> name;
			estadoJuego = inicio;
			break;

		case inicio:
			system("cls");
			cout << "Te encuentras en una celda.\nNo sabes hace cuanto, puesto que los recuerdos de como llegaste all\xa1 parecen haberse perdido.\nSolo una palabra se encuentra presente en tu mente, tu nombre: " << name << "." << endl;
			system("pause > nul");
			cout << "Al abrir los ojos, estos deben esforzarse para lograr captar solo un atisbo de luz, proveniente de las antorchas" << endl;
			cout << "del pasillo." << endl;
			cout << "\nTus piernas se encuentran d\x82" "biles, pero a\xa3" "n as\xa1, logras arrastrarte lentamente hacia la peque\xa4" "a puerta de barrotes." << endl;
			system("pause > nul");
			cout << "A trav\x82s, puedes ver a un guardia, reclinado en su silla. Parece estar sumido en un profundo sue\xa4o, de su " << endl;
			cout << "cintur\xa2n, se escapa un peque\xa4o destello cobrizo." << endl;
			system("pause > nul");
			cout << "Cuando finalmente tus ojos se acostumbran a la luz, logras verlo: llaves." << endl;
			system("pause > nul");
			cout << "\nCon lentitud estiras la mano, temeroso de que aquel movimiento llegase a despertar al guardia," << endl;
			cout << "pero finalmente, logras sujetar la llave." << endl;
			system("pause > nul");
			cout << "Te sientes la persona m\xa0s afortunada cuando haces encajar la llave dentro de la cerradura, y \x82sta gira sin resistencia." << endl;
			cout << "\nLogras abrir la puerta." << endl;
			system("pause > nul");
			cout << "\n- Psst, oye..." << endl;
			system("pause > nul");
			cout << "\nPor un instante, tu coraz\xa2n se detiene al escuchar una voz ronca llam\xa0ndote desde un costado,no donde el guardia \nse encontraba, si no unos metros a la izquierda.\nAll\xa1 se encontraba un hombre, de larga barba y cabellos plateados que, pese a su estado avejentado, puedes notar por su\n rostro agrietado que ha pasado mucho tiempo encerrado." << endl;
			cout << "\n- Ayudame... - murmur\xa2 el anciano, suplicante, sus pupilas viajando hasta enfocarse en el guardia dormido." << endl;
			system("pause > nul");
			cout << "\nT\xa3 pudiste verlo, de su cintur\xa2n, otra llave cobriza similar a la tuya, bailaba solitaria con el vaiv\x82n\ndel cuerpo del hombre somnoliento." << endl;
			system("pause > nul");
			cout << "Sin saber que peligros hay por delante, aquel fr\xa0gil anciano aguarda tu respuesta. T\xa3:\n" << endl;
			system("pause > nul");
			cout << "\n1. Decides ayudarlo.\n\n2. Lo abandonas a su suerte." << endl;

			cin >> opcion;

			if (opcion == 1)
			{
				athor = 1;
				estadoJuego = ayudarAthor;
			}
			else
			{
				system("cls");
				cout << "Sin mirar atr\xa0s, decides dejar al anciano atr\xa0s.\nNi una sola palabra escap\xa2 de tus labios, pues temes que cualquier m\xa1nimo ruido pueda llegar a despertar al guardia." << endl;
				system("pause > nul");
				cout << "\nUna vez escapas de los calabozos, te apresuras a subir por la escalera, a trav\x82s de un largo pasillo.\n\n No llegaste a verlo." << endl;
				system("pause > nul");
				cout << "Solo pudiste o\xa1r un silbido, antes de caer inerte en el suelo.\nLo \xa3ltimo que o\xa1ste, fueron los pasos haciendo eco en las paredes, acerc\xa0ndose hacia ti." << endl;
				system("pause > nul");
				estadoJuego = badEnding;
			}
			break;

		case ayudarAthor:
			system("cls");
			cout << "Con suaves pasos, vuelves a acercarte al guardia, tu mano estir\xa0""ndose para liberar la llave de su cintur\xa2n." << endl;
			system("pause > nul");
			cout << "De pronto, escuchas una botella de vidrio rodar. Accidentalmente, la pateaste." << endl;
			cout << "Ves como parte del contenido se libera sobre el piso de piedra. A juzgar por el aliento del hombre,era \x82""l el " << endl;
			cout << "responsablede la presencia de aquella botella.\n" << endl;
			system("pause > nul");
			cout << "Nuevamente, suspiras de alivio al sentir el metal en tus manos, y sin perder un segundo m\xa0s, te aproximas a " << endl;
			cout << "la celda del anciano. Una vez abierta la puerta, \x82""l te hace un gesto para seguir avanzando y dejar los calabozos\natr\xa0s." << endl;
			system("pause > nul");
			cout << "\nAntes de marcharse, el anciano cierra la puerta donde el guardia dormido se encontraba y, utilizando uno de" << endl;
			cout << "los peque\xa4os banquitos de madera que los soldados usaban para montar vigilancia, trunc\xa2 la puerta." << endl; 
			system("pause > nul");
			cout << "\nLuego de eso, y por largos minutos, caminas con tu acompa\xa4""ante a trav\x82""s de los oscuros pasillos, con solo el eco de " << endl;
			cout << "sus pisadas quebrando el silencio." << endl;
			system("pause > nul");
			cout << "\n- \xa8""Cu\xa0l"" es tu nombre, joven? - pregunta el anciano." << endl;
			cout << "- ... "<<name <<"- respondes en voz baja." << endl;
			cout << "- Gracias por salvarme, " << name << "- el hombre volte\xa2 levemente hacia ti, -me llamo Athor." << endl;
			system("pause > nul");
			cout << "\nUna vez las introducciones fueron echas, el silencio volvi\xa2 a invadir, hasta que, finalmente, dieron con una" << endl;
			cout << " escalera. Al subirla, un gran pasillo se abri\xa2 frente a ustedes." << endl;
			system("pause > nul");
			cout << "Sentiste como una mano se apretaba sobre tu boca cuando avanzaste, Athor, quien te sosten""\xa1""afirmemente, lade\xa2" << endl;
			cout << " la cabeza hacia el final del pasillo para indicarte que un arquero estaba entrando en la \xa3ltima habitaci\xa2n." << endl;
			system("pause > nul");
			cout << "\nUna vez fuera de peligro, te solt\xa2, y camin\xa2 hacia la primera puerta a la vista." << endl;
			cout << "Por tu lado, te aproximaste lentamente hacia la segunda, espiaste por el cerrojo, y viste que" << endl;
			cout << "estaba vac\xa1""a, con solo una escotilla en el suelo." << endl;
			system("pause > nul");
			cout << "\n- La otra est\xa0 cerrada - anunci\xa2 Athor, aproxim\xa0ndose, pudiste notar como su mirada estaba fija en la " << endl;
			cout << "puerta m\xa0s alejada, m\xa0s que en t\xa1." << endl;
			system("pause > nul");
			cout << "\nEncontraste una escotilla que puede significar el escape perfecto." << endl;
			cout << "Por otro lado, aquel arquero podr\xa1""a seguirte. T\xa3:" << endl;
			system("pause > nul");
			cout << "\n1. Entras a la puerta de la escotilla.\n2. Primero te encargas del arquero." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				estadoJuego = abrirPuertaEspada;

			}
			else {

				system("cls");
				cout << "Decididamente, caminas hacia la \xa3""ltima puerta. Despu\x82s de todo, no hay forma de poder huir sin" << endl;
				cout << "que ese arquero los siga. Athor murmura, pero puedes escuchar claramente que est\xa0 tratando de detenerte." << endl;
				cout << "\nSin embargo, t\xa3"" crees que est\xa0"" ser\xa0"" la manera para salvarlos a ambos." << endl;
				system ("pause > nul");
				cout << "En el instante que abres la puerta, una flecha sale disparada hacia ti, sientes una puntada en tu ojo" << endl;
				cout << "izquierdo antes de caer tendido en el suelo." << endl;
				system("pause > nul");
				cout << "\nAntes de morir, escuchas los pasos que pasan de largo de ti y se acercan a Athor." << endl;
				system("pause > nul");
				estadoJuego = badEnding;
			}
			break;

		case abrirPuertaEspada:
			system("cls");
			cout << "Pones la mano con cuidado en el picaporte, y lo giras con suavidad para no alertar a los soldados, y entras en la \nhabitaci\xa2n." << endl;
			cout << "\nEs una sala peque\xa4""a y pareciera que hace mucho que no se usa puesto que se encuentra polvorienta y sin velas alrededor." << endl;
			cout << "Antes de que Athor cerrase la puerta, logras ver el cuadro de un rey colgado en la pared junto a un librero vac\xa1""o," << endl;
			cout << "una vieja espada oxidada sobre una mesa, y la manija que abre la escotilla." << endl;
			system("pause > nul");
			cout << "\nTomas la espada, y decides conservarla por ahora.Luego volteas hacia Athor.T\xa3:" << endl;
			system("pause > nul");
			cout << "1. Tienes una arma, decides ir a por el arquero primero.\n2. Abres la escotilla." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				system("cls");
				cout << "Super decididamente, caminas hacia la \xa3""ltima puerta.Despu\x82""s de todo, no hay forma de poder huir sin" << endl;
				cout << "que ese arquero los siga. Athor murmura, pero puedes escuchar claramente que est\xa0"" tratando de detenerte." << endl;
				cout << "Sin embargo, t\xa3"" crees que est\xa0"" ser\xa0"" la manera para salvarlos a ambos." << endl;
				cout << "\nEn el instante que abres la puerta, una flecha sale disparada hacia ti, sientes una puntada en tu ojo izquierdo\nantes de caer tendido en el suelo" << endl;
				cout << "Antes de morir, escuchas los pasos que pasan de largo de ti y se acercan a Athor." << endl;
				system("pause > nul");
				estadoJuego = badEnding;
			}
			else
				estadoJuego = alcantarilla;

			break;

		case alcantarilla:
			system("cls");
			cout << "Te acercas a la escotilla y tiras fuertemente de la manija. Athor se aproxima a ayudarte y juntos logran abrirla." << endl;
			cout << "Cuando miran hacia abajo, no logran ver nada salvo completa penumbra. Athor encuentra un peque\xa4""o escombro, producto " << endl;
			cout << "de las paredes de piedra, y lo arroja dentro. Al instante, se oye como cae dentro de agua." << endl;
			system("pause > nul");
			cout << "\nEs una alcantarilla - explica \x82""l, sent\xa0""ndose en el borde, -ser\xa0 mejor que nos demos prisa." << endl;
			cout << "\nActo seguido, ves como el anciano se arroja dentro, y oyes sus pies sumergi\x82""ndose en el agua poco despu\x82""s." << endl;
			cout << " T\xa3"" lo imitas y saltas a trav\x82s de la escotilla.Al llegar al suelo, puedes sentir el agua a pocos cent\xa1""metros\n de tus rodillas." << endl;
			cout << "La corriente de agua corre en direcci\xa2n a la penumbra, sin embargo, del otro lado puedes ver co""mo en la superficie\n se refleja una luz." << endl;
			cout << "\n- \xa8""Por d\xa2""nde ? -pregunta Athor.\n" << endl;
			system("pause > nul");
			cout << "1. - Sigamos la corriente. \n2. -  Puedo ver una luz por all\xa0..." << endl;
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

		/////////// LADO OSCURO 

		case ladoOscuroConAthor:

			system("cls");
				

			cout << "- Creo que la salida esta por aqui.- Dices con total seguridad." << endl;
			cout << "\nAunque esceptico, Athor decide seguirte mientras te adentras en la oscuridad." << endl;
			system("pause > nul");
			cout << "\nA lo lejos, comienzas a o\xa1r un cuerpo lentamente acercandose. el olor a podredumbe te llega mucho antes que la\n figura que lo emanaba." << endl;
			system("pause > nul");
			cout << "Antes de que pudieras reaccionar, la figura, apenas visible, corre velozmente hacia Athor. All\xa1 puedes ver que" << endl;
			cout << "su mano podrida blande una espada. El anciano busca defenderse y comienza a forcejear con el cad\xa0ver." << endl;
			cout << "\n- No te preocupes por mi!- grita,- Corre!.\nDebes reaccionar r\xa0pido! \n" << endl;
			system("pause > nul");
			cout << "1. Peleas.\n2. Huyes." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				system("cls");
				cout << "De igual manera, t\xa3 sacas tu espada e intentas atacarle. Sin embargo, el monstruo parece superarlos \nen velocidad y fuerza." << endl;
				cout << "Athor es el primero en caer, luego, voltea y te atraviesa.No tuviste oportunidad." << endl;
				cout << "\nYa en el agua, puedes sentir que el muerto de toma de sus ropas, arrastr\xa0ndote a\xa3n m\xa0s en la oscuridad." << endl;
				system("pause > nul");
				cout << "\n-Yu...bbb..eee..l...n...o... E..ss...t..aa...s...o...lo... -" << endl;
				system("pause > nul");
				cout << "Yu...bbe...ll... tiie...nnn...eee am..mmi...gooos."<< endl;
				system("pause > nul");
				system("cls");
				for (int x = 1; x < 100; x = x + 1)
				{
					cout << "YUBEL TIENE AMIGOS YUBEL TIENE AMIGOS YUBEL TIENE AMIGOS YUBEL TIENE AMIGOS YUBEL TIENE AMIGOS YUBEL TIENE AMIGOS" << endl;
				}
				system("pause > nul");
				estadoJuego = badEnding;
			}
			else
			{
				system("cls");
				athor = false;
				estadoJuego = primerPisoSinAthor;
			}
			break;

		case primerPisoSinAthor:
			system("cls");
			cout << "Cierras los ojos fuertemente y sin pensarlo demasiado, corres por donde llegaron." << endl;
			cout << "No tienes idea cuanto, puesto que en todo momento, los gritos de Athor parec\xa1""an seguirte, resonando en las paredes" << endl;
			system("pause > nul");
			cout << "\nNo muy lejos, encuentras una escalera. Subes a zancadas, hasta que el silencio vuelve a hacerse presente." << endl;
			cout << "La escalera finaliza en una peque\xa4""a habitaci\xa2""n donde solo hay una gran puerta de color oscuro, y una" << endl;
			cout << "cerradura verde.Solo all\xa1"" te percatas de una compa\xa4""\xa1""a, junto a la puerta, se encontraba tendido" << endl;
			cout << "lo que fue una vez una persona, ahora reducido a un esqueleto en harapos, su pierna derecha le faltaba, y en sus \nmanos hab\xa1""a un gran escudo." << endl;
			cout << "Decides tomarlo, y sin m\xa0s para hacer all\xa1, debes volver a la alcantarilla." << endl;
			system("pause > nul");
			cout << "\n\xa8""A d\xa2""nde?\n" << endl;
			cout << "1. Planta baja.\n2. Volver a enfrentarte al cad\xa0ver." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				estadoJuego = puertaGuardiaSinAthor;
			}
			else
			{
				estadoJuego = pelearUndeadSolo;
			}
			break;

		case pelearUndeadSolo:
			athor = false;
			steelSword = true;
			
			system("cls");
			cout << "Armado de valor, decides regresar sobre tus pasos a enfrentar al cad\xa0""ver que, momentos antes, termin\xa2"" con \nla vida de tu acompa\xa4""ante." << endl;
			cout << "Parece olerte, puesto que una vez m\xa0s puedes oir como se acerca, hablando entre gru\xa4idos, ese hedor repugnante \nllegando hacia ti antes que la figura." << endl;
			cout << "que lo emanaba. \nNo lo piensas dos veces y corres hacia \x82l. Tu enemigo blande la espada contra t\xa1, pero usas el escudo para \nprotegerte y contraatacas." << endl;
			cout << "Para t\xa1, la pelea parece haber durado varias horas, sin embargo, solo unos instantes luego, el muerto - vivo cae al\n agua, y t\xa3"" aprovechas la oportunidad y lo golpeas con el escudo." << endl;
			cout << "\nNo logras entender sus \xa3""ltimas palabras, pero hubieras cre\xa1""do que estaba llamando a alguien." << endl;
			system("pause > nul");
			cout << "\nDesafortunadamente, la ya maltrecha espada termina de partirse luego de la batalla, puesto que no te queda m\xa0""s\n opci\xa2""n que llevarte la del enemigo ca\xa1""do." << endl;
			cout << "Incluso con solo la tenue luz que alumbraba a lo lejos, una vez la sujetas, puedes ver como el acero reluce. \nCrees que una espada as\xa1 podr\xa1""a haber sido de alguien m\xa0""s que un simple soldado arrojado a las alcantarillas." << endl;
			cout << "\nSin m\xa0s, y habiendo cumplido tu venganza, te alejas" << endl;
			system("pause > nul");

			estadoJuego = puertaGuardiaSinAthor;


			break;


		case ladoLuzConAthor:
			system("cls");
			cout << "- El agua causa un reflejo, debe haber algo m\xa0s por all\xa1." << endl;
			system("pause > nul");
			cout << "\nAthor asiente, y te sigue de cerca.No muy lejos, encuentran una larga escalera. La cual finaliza en una" << endl;
			cout << "peque\xa4""a habitaci\xa2""n donde solo hay una gran puerta de color oscuro, y una cerradura verde." << endl;
			cout << "\n- Supongo que alguien no tuvo tanta suerte."<< endl;
			cout << "La voz de Athor te hace voltear, y lo ves en una esquina, acuclillado frente a un cuerpo tendido, ahora reducido" << endl;
			cout << "a un esqueleto en harapos, su pierna derecha le faltaba, y en sus manos hab\xa1""a un gran escudo de madera." << endl;
			cout << "Una vez el anciano logra quit\xa0""rselo, se levanta nuevamente y te mira, entreg\xa0""ndote el escudo." << endl;
			system("pause > nul");
			cout << "\n- No creo que podamos abrir eso con tan solo esa vieja espada y un escudo, -menciona, -la llave la debe\n tener aquel guardia, debemos conseguirla." << endl;
			cout << "\nAthor parec\xa1""a muy seguro, sin embargo, quiz\xa0"" hab\xa1""a una salida mucho m\xa0""s r\xa0""pida\n yendo por el otro lado de la alcantarilla. T\xa3:" << endl;

			cout << "1. Decid\xa1s ir hacia la parte oscura de la alcantarilla.\n2. Le haces caso a Athor." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				cout << "-Regresemos, la salida debe estar del otro lado de la alcantarilla." << endl;
				system("pause > nul");
				estadoJuego = mazmorraAthor;
			}
			else
			{
				cout << "- Tienes razon, - dices - Vayamos por esa llave." << endl;
				system("pause > nul");
				estadoJuego = puertaGuardiaConAthor;
			}

			break;

		case mazmorraAthor:
			system("cls");
			cout << "\nAunque esceptico, Athor decide seguirte mientras te adentras en la oscuridad." << endl;
			system("pause > nul");
			cout << "\nA lo lejos, comienzas a o\xa1r un cuerpo lentamente acercandose. el olor a podredumbe te llega mucho antes que la\n figura que lo emanaba." << endl;
			system("pause > nul");
			cout << "Antes de que pudieras reaccionar, la figura, apenas visible, corre velozmente hacia Athor. All\xa1 puedes ver que" << endl;
			cout << "su mano podrida blande una espada. El anciano busca defenderse y comienza a forcejear con el cad\xa0ver." << endl;
			cout << "\n- No te preocupes por mi!- grita,- Corre!.\nDebes reaccionar r\xa0pido! \n" << endl;
			system("pause > nul");
			cout << "1. Peleas.\n2. Huyes." << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				system("cls");
				cout << "Ignorando los gritos de Athor, t\xa3 pones el escudo enfrente tuyo y te abalanzas contra el muerto-vivo." << endl;
				cout << "Con tu espada un mano, la blandes contra \x82ste, una y otra vez, sin darle posibilidad de contraatacar." << endl;
				cout << "Es Athor quien planta una mano en tu hombro y te tira hacia atr\xa0s." << endl;
				cout << "Cuando tu escudo deja de hacer presi\xa2""n contra el cad\xa0""ver, \x82""ste cae al suelo como si nunca se hubiese levantado." << endl;
				system("pause > nul");
				cout << "\n- S\xa1 que tienes agallas… - exclama Athor, - y ahora me has salvado la vida por segunda vez." << endl;
				cout << "Desafortunadamente, la ya maltrecha espada termina de partirse luego de la batalla, puesto que no te queda m\xa0""s opci\xa2n""\nque llevarte la del enemigo ca\xa1""do." << endl;
				cout << "Luego de aquella batalla, ambos deciden volver por la escotilla hacia la planta baja." << endl;
				system("pause > nul");
				steelSword = true;
				estadoJuego = puertaGuardiaConAthor;
			}
			else
			{
				system("cls");
				cout << "Cierras los ojos fuertemente y sin pensarlo demasiado, corres por donde llegaron." << endl;
				cout << "No tienes idea cuanto, puesto que en todo momento, los gritos de Athor parec\xa1""an seguirte, resonando en las paredes" << endl;
				system("pause > nul");
				athor = false;
				estadoJuego = puertaGuardiaSinAthor;
			}
			break;

		case puertaGuardiaSinAthor:

			system("cls");
			cout << "Decides volver por la escotilla hacia la planta baja. Sabes que la llave podr\xa1""aestar en un solo lugar." << endl;
			cout << "Entras por la puerta m\xa0s alejada, donde un arquero se encontraba sentado." << endl;
			system("pause > nul");
			cout << "\nEn solo un instante, se levanta y apunta hacia ti, la flecha sale disparada con un silbido." << endl;
			cout << "\nPara defenderte, pones el escudo delante de ti, dejando que la punta metalica atraviece la madera. " << endl;
			cout << "Un segundo despues te abalanzas contra el guardia,no lo pensaste, en un segundo sacaste tu espada y la \nblandiste contra el contrario. " << endl;
			cout << "\nCuando reaccionaste, solo hab\xa1""a un cuerpo inerte en el suelo. Y sobre la mesa, dos llaves, junto a una nota que le\xa1""a:" << endl;
			system("pause > nul");
			cout << "\nTU MAESTRO SER\xb5 EJECUTADO EN LA MA\xa5""ANA" << endl;
			system("pause > nul");
			cout << "\nPudiste ver qu\x82 una, por su color esmeralda, era la que llevaba al primer piso. La otra, se ve\xa1""a tan regular como " << endl;
			cout << "las de las celdas. Pudiste reconocer de d\xa2""nde proven\xa1""a." << endl;
			system("pause > nul");
			cout << "\nUna vez fuera de la habitaci\xa2""n, te diriges hacia la primera puerta, aquella que Athor hab\xa1""a encontrado cerrada." << endl;
			cout << "No dudas un segundo antes de abrirla, sin embargo, tienes cuidado de lo que podr\xa1""as encontrar all\xa1. " << endl;
			system("pause > nul");
			cout << "Al abrir la puerta, te encuentras con una habitaci\xa2""n apenas iluminada, y una mujer sentada en el centro, " << endl;
			cout << "de largo cabello negro, vestida en harapos similares a los que Athor y t\xa3 ten\xa1""an. " << endl;
			cout << "\nLentamente, levanta la mirada, exponiendo sus facciones. La falta de comida y luz se notaban en su fam\x82""lico rostro," << endl;
			cout << " pero pod\xa1""an ser sus ojos, de un vibrante color rojo, lo que m\xa0""s te llama la atenci\xa2""n." << endl;
			system("pause > nul");
			cout << "\n- \xa8""Qui\x82""n eres? - pregunt\xa2." << endl;
			cout << "-..." << name << "." << endl;
			cout << "- No eres un guardia. continu\xa2 ella." << endl;
			cout << "- Estoy tratando de huir, me dirijo al primer piso, - respondiste, - \xa8puedes caminar?" << endl;
			system("pause > nul");
			cout << "\nLa mujer asiente levemente, y aunque con dificultad, logra ponerse de pie. T\xa3 le ayudaste a salir del cuarto," << endl;
			cout << " y por su expresi\xa2""n, parec\xa1""a que eso no hab\xa1""a ocurrido en mucho tiempo. " << endl;
			system("pause > nul");
			cout << "\n- Gracias" << name << ", - murmura, - Mi nombre es Mizuki..." << endl;
			system("pause > nul");

			if (steelSword == true)
			{
				estadoJuego = segundoDesafioMizuki;
			}

			else
			{
				estadoJuego = undeadMizuki;
			}
			break;

		case puertaGuardiaConAthor:
			system("cls");
			cout << "como Athor sugiri\xa2, se dirigen a la puerta m\xa0s alejada, donde un arquero se encontraba sentado. En solo un\n instante, se levanta"" y apunta hacia ti." << endl;
			cout << "\nLa flecha sali\xa2 disparada con un silbido." << endl;
			system("pause > nul");
			cout << "\nPara protegerte, pones el escudo delante de ti, dejando que la punta de metal lo atraviece, y antes de notarlo, "<< endl;
			cout << "Athor estaba abalanz\xa0""ndose contra \x82""l, tu espada en mano. A sangre fr\xa1""a, el anciano le atravieza el pecho."<< endl;
			cout << "Una vez el contrario deja de oponer resistencia, Athor lo suelta, y lentamente se apoya en la mesa, para arrodillarse "<< endl;
			cout << "frente a \x82l y quitarle su arco y su carcaj." << endl;
			cout << "Luego, volte\xa2 para devolverte tu espada." << endl;
			cout << "\n- Ten, las espadas nunca se me dieron bien, -admite. " << endl;
			cout << "\nCuando reaccionaste, solo hab\xa1""a un cuerpo inerte en el suelo.Y sobre la mesa, dos llaves." << endl;
			cout << "\nPudiste ver qu\x82 una, por su color esmeralda, era la que llevaba al primer piso. La otra, se ve\xa1""a tan regular como " << endl;
			cout << "las de las celdas. Pudiste reconocer de d\xa2""nde proven\xa1""a. T\xa3 y Athor compartieron miradas." << endl;
			system("pause > nul");
			cout << "\nUna vez fuera de la habitaci\xa2""n, caminan hacia la primera puerta, aquella que Athor hab\xa1""a encontrado cerrada." << endl;
			system("pause > nul");
			cout << "\n- Athor, - murmuras - \xa8""Qui\x82n eres realmente? " << endl;
			cout << "-No soy nadie, -responde -pero antes… Sol\xa1""a ser un caballero." << endl;
			cout << "\nLuego de eso, el anciano vuelve a guardar silencio. Por tu parte, vuelves a concentrarte en la puerta." << endl;
			system("pause > nul");
			system("cls");
			cout << "Al abrir la puerta, te encuentras con una habitaci\xa2""n apenas iluminada, y una mujer sentada en el centro, " << endl;
			cout << "de largo cabello negro, vestida en harapos similares a los que Athor y t\xa3 usaban. " << endl;
			cout << "\nLentamente, levanta la mirada, exponiendo sus facciones. La falta de comida y luz se notaban en su fam\x82""lico rostro," << endl;
			cout << " pero pod\xa1""an ser sus ojos, de un vibrante color rojo, lo que m\xa0""s te llama la atenci\xa2""n." << endl;
			system("pause > nul");
			cout << "\n- \xa8""Qui\x82""n eres? - pregunt\xa2." << endl;
			cout << "-..." << name << "." << endl;
			cout << "- No eres un guardia. continu\xa2 ella." << endl;
			cout << "- Estoy tratando de huir, me dirijo al primer piso, - respondiste."<< endl;
			cout << "- \xa8Puedes caminar? -pregunta Athor, sujetando su brazo." << endl;
			system("pause > nul");
			cout << "\nLa mujer asiente levemente, y aunque con dificultad, logra ponerse de pie con una mirada de sorpresa" << endl;
			cout << "en sus cansadas facciones. Su mano se apoya firmemente en el hombro del anciano, y \x82l le devuelve el gesto." << endl;
			system("pause > nul");
			cout << "\n - Est\xa0s vivo...- murmura." << endl;
			cout << "- No si no fuera por " << name << "." << endl;
			cout << "\nUn momento despu\x82s ambos se separan, y la joven camina hacia ti con una leve sonrisa en su rostro." << endl;
			cout << " y por su expresi\xa2""n, parec\xa1""a que eso no hab\xa1""a ocurrido en mucho tiempo. " << endl;
			system("pause > nul");
			cout << "\n- Gracias" << name << ", - murmura, - Mi nombre es Mizuki..." << endl;
			system("pause > nul");
			if (steelSword == true)
			{
				estadoJuego = primerDesafioAmbos;
			}
			else
			{
				estadoJuego = undeadVivo;
			}
			break;

		case undeadMizuki:
			system("cls");
			cout << "Al regresar a la alcantarilla, aquella maligna presencia parece olerte, puesto que una vez m\xa0s" << endl;
			cout << " puedes oir como se acerca, hablando entre gru\xa4""idos, ese hedor repugnante llegando hacia ti antes que la figura.\nNo lo piensas dos veces y corres hacia \x82l." << endl;
			system("pause > nul");
			cout << "\nTu contrincante blande la espada hacia t\xa1, pero t\xa3 usas el escudo para protegerte y contraatacas." << endl;
			cout << "Para t\xa1"", la pelea parece haber durado varias horas, sin embargo, solo unos instantes luego, el muerto vivo" << endl;
			cout << "cae al agua, y t\xa3"" aprovechas la oportunidad y lo golpeas con el escudo." << endl;
			system("pause > nul");
			cout << "\n Desafortunadamente, la ya maltrecha espada termina de partirse luego de la batalla, puesto que no te queda m\xa0""s opci\xa2""n" << endl;
			cout << "que llevarte la del enemigo ca\xa1""do." << endl;
			cout << "\nAntes de que pudieras voltear, Mizuki pasa de t\xa1"", adentr\xa0""ndose m\xa0""s en la oscuridad. Vas tras ella, y encuentras " << endl;
			cout << "una puerta abierta que da a una peque\xa4""a habitaci\xa2""nel olor a madera podrida es lo m\xa0""s satisfactorio de aquel lugar: " << endl;
			cout << "sobre la mesa, como si fuera un altar, el cuerpo de un gato yace ya muerto hace tiempo, de su cuello colgaba un amuleto y una insignia que le\xa1""a -YUBEL-." << endl;
			cout << "\nMizuki toma el amuleto, y posa una mano sobre el animal por un instante." << endl;
			system("pause > nul");
			cout << "\nAll\xa1 fue cuando lo notaste." << endl;
			system("pause > nul");
			cout << "\nAl seguir observando la habitaci\xa2n en la penumbra, divisaste un cuerpo, sentado en una silla, pareciera que estaba" << endl;
			cout << "durmiendo, pero t\xa3 sabes bien que no es asi." << endl;
			system("pause > nul");
			cout << "\n- Athor - susurra Mizuki, y su mano toma la del anciano suavemente." << endl;
			cout << "- \xa8Lo conociste? - preguntas." << endl;
			system("pause > nul");
			cout << "\nPero ella simplemente asiente, antes de alejarse, puedes ver como se cuelga aquel amuleto en el cuello." << endl;
			cout << "\n- Sigamos." << endl;
			system("pause > nul");

			amuleto = true;
			steelSword = true;
			estadoJuego = segundoDesafioMizuki;

			break;

		case undeadVivo:
			system("cls");
			cout << "Al regresar a la alcantarilla, aquella maligna presencia parece olerte, puesto que una vez m\xa0s" << endl;
			cout << "puedes oir como se acerca, hablando entre gru\xa4""idos, ese hedor repugnante llegando hacia ti antes que la figura" << endl;
			cout << " que lo emanaba.\nNo lo piensas dos veces, tu mano se dirige inconscientemente a la espada. Cuando de repente:" << endl;
			system("pause > nul");

			cout << "\n- A un lado, " << name << "." << endl;
			cout << "\nAntes de que pudieras voltear, sientes como las plumas de una flecha rozan suavemente tu rostro y pasan de" << endl;
			cout << "largo para clavarse en el cadáver. Segundos después, su cuerpo se desploma en el agua." << endl;
			system("pause > nul");
			cout << "\n Athor pasa de ti y se inclina para levantar la espada que el enemigo caído aún sostenía y te la entrega sin más." << endl;
			cout << "\n- … Gracias - atinaste a decir antes de agarrar la nueva espada." << endl;
			cout << "\nEl anciano simplemente asintió de regreso. " << endl;
			system("pause > nul");
			cout << "\nCuando se disponen a seguir camino, Mizuki pasa de ambos con velocidad, adentr\xa0""ndose m\xa0""s en la oscuridad." << endl;
			cout << "Se ven forzados a ir tras ella, y pronto encuentran una puerta abierta que da a una peque\xa4""a habitaci\xa2""nel olor "<< endl;
			cout << "a madera podrida es lo m\xa0""s satisfactorio de aquel lugar: sobre la mesa, como si fuera un altar," << endl;
			cout << " el cuerpo de un gato yace	 ya muerto hace tiempo, de su cuello colgaba un amuleto y una insignia que le\xa1""a -YUBEL-." << endl;
			cout << "\nMizuki toma el amuleto, y posa una mano sobre el animal por un instante." << endl;
			system("pause > nul");
			cout << "\n- ¿Que es eso ? -atinaste a preguntar." << endl;
			cout << "- Hay cosas que son mejor no saberlas, joven, -interrumpe Athor, y ves como Mizuki clava sus ojos rojos en él." << endl;
			cout << "- Esto mantenia a ese soldado caminando, -explica ella, -era mío, antes que… Me lo quitaran." << endl;
			cout << "- \xa8LQuién te lo quitó ? -preguntaste nuevamente." << endl;
			cout << "- El mismo que dejó encerrado a Athor." << endl;
			system("pause > nul");
			cout << "\nEl aludido niega con la cabeza, y apunta nuevamente hacia la alcantarilla." << endl;
			cout << "\n- Ya tendremos tiempo para explicaciones, -dice - primero, será mejor que salgamos de aquí." << endl;
			cout << "\nAmbos estuvieron de acuerdo, por lo que deciden dejar el cuarto y todos sus habitantes atrás." << endl;

			steelSword = true;
			amuleto = true;
			system("pause > nul");
			estadoJuego = primerDesafioAmbos;
			break;

		case primerDesafioAmbos:
			system("cls");
			cout << "Aca va a historia que deriva en el primer desafío, asi que" << endl;
			estadoJuego = juegoAthor;
			system("pause > nul");
			break;

		case juegoAthor:
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
			cout << "Al subir se encuentran con un gran símbolo en la pared de la izquierda, una puerta y en la misma pared donde esta la puerta, tres ruedas con numeros desde el 0 al 9 y un boton." << endl;
			system("pause > nul");
			cout << "Pruebas a girar una rueda y ves que es el mecanismo que abre la puerta, pero sorpresivamente unos barrotes cierran el camino por el que venian." << endl;
			cout << "Athor dice - Debe ser una especie de trampa contra invasores! Debes poner el numero correcto y presionar el boton para que logremos pasar." << endl;
			while (pi != inputUsuario && !perdistePi)
			{	
				if (intentos < limiteIntentos)
				{
					cout << "La combinacion correcta es: ";
					cin >> inputUsuario;
					intentos++;
				}
				else
				{
					perdistePi = true;
				}
			}
			if (perdistePi)
			{
				cout << "Escuchas una voz que dice\n-Codigo Incorrecto\nPero sin embargo, la puerta se abre." << endl;
				system("pause > nul");
				cout << "aunque confundidos, deciden seguir adelante.";
				system("pause > nul");
				estadoJuego = segundoDesafioAmbos;

			}
			else
			{
				cout << "Una vez presionas el botón, este se sale de lugar y cae en tu mano," << endl;
				system("pause > nul");
				cout << "al girarlo, notas que tenía un rubí incrustado dentro." << endl;
				system("pause > nul");
				cout << "tus compañeros se encontraban muy distraidos observando la puerta abrirse para notarlo," << endl;
				cout << "así que por ahora, te lo guardas en tu bolsillo." << endl;
				system("pause > nul");
				cout << "-¡Lo logramos!- exclama Athor." << endl;
				system("pause > nul");
				rubiAthor = true;
				estadoJuego = segundoDesafioAmbos;
			}
			break;

		case segundoDesafioAmbos:
			system("cls");
			cout << "Aca va a historia que deriva en el desafío de Mizuki, asi que-" << endl;
			estadoJuego = preguntaUno;
			system("pause > nul");
			break;

		case segundoDesafioMizuki:
			system("cls");
			cout << "Aca va a historia que deriva en el desafío de Mizuki, pero sin Athor" << endl;
			estadoJuego = preguntaUno;
			system("pause > nul");
			break;
		
		case preguntaUno:
			cout << "\xa8Que símbolo había en la puerta?" << endl;
			cout << "\n1. Phi.\n2. Pi" << endl;
			cin >> respuesta;

			if (respuesta == 2)
			{
				cout << "siguiente pregunta." << endl;
				respuestasCorrectas++;
				system("pause > nul");
				estadoJuego = preguntaDos;
			}
			else
			{
				cout << "siguiente pregunta." << endl;
				system("pause > nul");
				estadoJuego = preguntaDos;
			}


			break;

		case preguntaDos:
			system("cls");
			cout << "\xa8Qué relación tiene Athor con el arquero que guardaba las llaves?" << endl;
			cout << "\n1.Es su maestro.\n2. Es su padre." << endl;
			system("pause > nul");
			cin >> respuesta;

			if (respuesta == 1)
			{
				cout << "siguiente pregunta." << endl;
				respuestasCorrectas++;
				estadoJuego = preguntaTres;
			}
			else
			{
				cout << "siguiente pregunta." << endl;
				system("pause > nul");
				estadoJuego = preguntaTres;
			}
			break;

		case preguntaTres:
			system("cls");
			cout << "\xa8Qué le falta al esqueleto que tenía el escudo?" << endl;
			cout << "\n1. Su pierna.\n2. Su brazo" << endl;
			cin >> respuesta;

			if (respuesta == 1)
			{
				cout << "siguiente pregunta." << endl;
				system("pause > nul");
				respuestasCorrectas++;
				estadoJuego = preguntaCuatro;
			}
			else
			{
				cout << "siguiente pregunta." << endl;
				system("pause > nul");
				estadoJuego = preguntaCuatro;
			}
			break;

		case preguntaCuatro:
			system("cls");
			cout << "\xa8Quién es Yugel?" << endl;
			cout << "\n1. El cadaver .\n2. El gato" << endl;
			cin >> respuesta;

			if (respuesta == 2)
			{
				cout << "siguiente pregunta." << endl;
				respuestasCorrectas++;
				system("pause > nul");
				estadoJuego = preguntaCinco;
			}
			else
			{
				cout << "siguiente pregunta." << endl;
				system("pause > nul");
				estadoJuego = preguntaCinco;
			}
			break;
		case preguntaCinco:
			system("cls");
			cout << "\xa8""De que material eran las llaves que te liberaron?" << endl;
			cout << "\n1. Cobre.\n2. Hierro" << endl;
			cin >> respuesta;

			if (respuesta == 1)
			{
				cout << "Has finalizado el desafío." << endl;
				respuestasCorrectas++;
				system("pause > nul");
				estadoJuego = finalDelDesafio;
			}
			else
			{
				cout << "Has finalizado el desafío." << endl;
				system("pause > nul");
				estadoJuego = finalDelDesafio;
			}

			break;

		case finalDelDesafio:
			system("cls");
			cout << "- Has dado " << respuestasCorrectas << " respuestas correctas." << endl;
			if (respuestasCorrectas >= respuestasNecesarias)
			{
				cout << "- Has pasado la prueba, toma esto y sigue adelante." << endl;
				cout << "La mujer te entrega un zafiro." << endl;
				cout << "- Les deseo buena suerte, y recuerden..." << endl;
				cout << "La respuesta final está en el corazón " << endl;
				zafiroMizuki = true;

				if (athor == true)
				{
					estadoJuego = tercerDesafioAmbos;
				}
				else
				{
					tercerDesafioMizuki;
				}
			}

			else
			{
				cout << "-Has fallado la prueba - dice la mujer,- sin embargo todavía tienes una oportunidad" << endl;
				cout << "para salvarte... Sigue adelante, y recuerda:" << endl;
				cout << "La respuesta final está en el corazón." << endl;
				if (athor == true)
				{
					estadoJuego = tercerDesafioAmbos;
				}
				else
				{
					estadoJuego = tercerDesafioMizuki;
				}
			}
			system("pause > nul");
			break;

		case tercerDesafioAmbos:
			system("cls");

			if (zafiroMizuki == false || rubiAthor == false)
			{
				cout << "- Debes dejar a un compañero atras. \xa8""Aceptas? " << endl;

				cout << "1. Si\n2. No " << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					cout << "- \xa8""A quien quieres dejar atras?" << endl;
					cout << "1.Mizuki\n2. Athor" << endl;
					cin >> opcion;
					if (opcion == 1)
					{
						cout << "Decides dejar a Mizuki atras" << endl;
						estadoJuego = finalConAthor;
					}
					else
					{
						cout << "Decides dejar a Athor atras" << endl;
						estadoJuego = finalConMizuki;
					}
				}
				else
				{
					estadoJuego = juegoProta;
				}
			}
			else
			{
				cout << "- Puedes seguir tu camino, la salida esta pasando esta puerta." << endl;
				system("pause > nul");
				estadoJuego = endGame;
			}
			system("pause > nul");

			break;

		case tercerDesafioMizuki:
			system("cls");

			if (zafiroMizuki == false)
			{
				cout << "- Debes dejar a tu compañera atras." << endl;
				system("pause > nul");
				cout << "\nAl oir aquellas apalabras, puedes sentir la ansiedad de Mizuki a tu lado" << endl;
				system("pause > nul");
				cout << "- Si decides ir con ella, te advierto, una entidad maligna te estara esperando." << endl;
				system("pause > nul");
				cout << "\n\xa8""Abandonas a Mizuki y sigues adelante por tu cuenta?" << endl;
				cout << "1. Si\n2. No " << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					cout << "- Lo lamento... Lo que sea que haya adelante, te quiere a ti, no a mi..." << endl;
					system("pause > nul");
					cout << " Cuando das un paso adelante, Mizuki trata de seguirte, pero es " << endl;
					cout << "detenida por una barrera.\n" << endl;
					system("pause > nul");
					cout << "- ¡Si no te mata hoy, pronto lo hará! - grita, - ¡Solo hay una razón" << endl;
					cout << " por la cual no te ha matado todavía, y es que estando con vida " << endl;
					cout << "no lo puedes lastimar!" << endl;
					system("pause > nul");
					cout << "\nObservas a la joven por un instante, apoyando una mano contra la barrera." << endl;
					system("pause > nul");
					cout << "\n- Adios Mizuki, lo lamento." << endl;
					cout << "\nAl alejarte, puedes escuchar los gritos de la joven, llamando por ti." << endl;
					estadoJuego = finalSolo;
				}
				else
				{
					estadoJuego = juegoProta;
				}
			}
			else
			{
				cout << "- Puedes seguir tu camino, la salida esta pasando esta puerta." << endl;
				system("pause > nul");
				estadoJuego = finalConMizuki;
			}
			estadoJuego = juegoProta;
			system("pause > nul");
			break;

		case juegoProta:
			system("cls");
			cout << "aca va el juego cuando todo lo demas fracasa, obviamente todo esto hay que armarlo" << endl;
			system("pause > nul");
			estadoJuego = gameCard1;
			break;

		case gameCard1:
			system("cls");
			cout << "valor: " << firstValue << endl; //only for test DELETE OR COMMENT THIS c:

			cout << "Pienso en una carta. \xa8""En que carta pienso? Elige con cuidado joven aventurero.";
			if (firstValue == 1)
			{
				cout << R"(
          _____		 _____		 _____ 
         |A .  |	|4    |		|10 o |
         | /.\ |	| v v |		|o o o|
         |(_._)|	|     |		|o o o|
         |  |  |	| v v |		|o o o|
         |____V|	|____h|		|___0I|
)";
			}
			else if (firstValue == 2)
			{
				cout << R"(
		 _____		 _____		 _____
		|K  WW|		|6    |		|7    |
		| /\{)|		| v v |		| ^ ^ |
		| \/%%|		| v v |		|^ ^ ^|
		|  %%%|		| v v |		| ^ ^ |
		|_%%%>|		|____9|		|____L|
)";
			}
			else
			{
				cout << R"(
          _____		 _____		 _____ 
         |9    |	|J  ww|		|5    |
         |& & &|	| ^ {)|		| & & |
         |& & &|	|(.)% |		|  &  |
         |& & &|	| | % | 	| & & |
         |____6|	|__%%[|		|____S|
)";
			}
			cout << "Carta número (1)\nCarta número (2)\nCarta número (3)\nPienso en: ";
			cin >> firstCard;
			cout << endl;
			if (firstCard == firstValue)
			{
				cout << "Tu decision ha sido correcta. Puedes continuar aventurero";
				system("pause > nul");
				estadoJuego = endGame;
			}
			else
			{
				cout << "Elección incorrecta. Te quedan dos intentos. Trata de adivinar.";
				system("pause > nul");
				estadoJuego = gameCard2;
			}
			break;

		case gameCard2:
			system("cls");
			cout << "valor: " << secondValue << endl; //Do u kno da wae? Comment this or delete:V
			cout << "Trata de adivinar mi carta... ";
			if (secondValue == 1)
			{
				cout << R"(
          _____		 _____		 _____ 
         |2    |	|6    |		|Q  ww|
         |  ^  |	| o o |		| o {(|
         |     |	| o o | 	|o o%%|
         |  ^  |	| o o |		| |%%%|
         |____Z|	|____9|		|_%%%O|
)";
			}
			else if (secondValue == 2)
			{
				cout << R"(
		 _____		 _____		 _____
		|4    |		|5    |		|A ^  |
		| & & |		| o o |		| / \ |
		|	  |		|  o  |		| \ / |
		| & & |		| o o |		|  .  |
		|____h|		|____S|		|____V|
)";
			}
			else
			{
				cout << R"(
          _____		 _____		 _____ 
         |2    |	|K  WW|		|4    |
         |  v  |	|   {)|		| ^ ^ |
         |     |	|(v)%%|		|     |
         |  v  |	| v%%%| 	| ^ ^ |
         |____Z|	|_%%%>|		|____h|
)";
			}
			cout << "Carta número (1)\nCarta número (2)\nCarta número (3)\nPienso en: ";
			cin >> secondCard;
			cout << endl;
			if (secondCard == secondValue)
			{
				cout << "Tu decision a sido correcta. Puedes continuar aventurero";
				system("pause > nul");
				estadoJuego = endGame;
			}
			else
			{
				cout << "bad";
				system("pause > nul");
				estadoJuego = gameCard3;
			}
			break;

		case gameCard3:
			cout << "valor: " << thirdValue << endl; //LUKE I AM YOUR FATHER
			cout << "Pienso en una carta. En que carta pienso. Elige con cuidado joven aventurero.";
			if (thirdValue == 1)
			{
				cout << R"(
          _____		 _____		 _____ 
         |4    |	|A_ _ |		|7    |
         | o o |	|( v )|		| v v |
         |     |	| \ / | 	|v v v|
         | o o |	|  .  |		| v v |
         |____h|	|____V|		|____L|
)";
				cin >> thirdCard;
				cout << endl;
				if (thirdCard == 2)
				{
					cout << "Tu decision ha sido correcta. Puedes continuar aventurero";
					system("pause > nul");
					estadoJuego = endGame;
				}
				else
				{
					cout << "bad";
					system("pause > nul");
					estadoJuego = endGame;
				}
			}
			else if (thirdValue == 2)
			{
				cout << R"(
		 _____		 _____		 _____
		|7    |		|K  WW|		|A_ _ |
		| & & |		| ^ {)|		|( v )|
		|& & &|		|(.)%%|		| \ / |
		| & & |		| |%%%|		|  .  |
		|____L|		|_%%%>| 	|____V|
)";
				cin >> thirdCard;
				cout << endl;
				if (thirdCard == 3)
				{
					cout << "Tu decision ha sido correcta. Puedes continuar aventurero";
					system("pause > nul");
					estadoJuego = endGame;
				}
				else
				{
					cout << "bad";
					system("pause > nul");
					estadoJuego = endGame;
				}
			}
			else
			{
				cout << R"(
          _____		 _____		 _____ 
         |A_ _ |	|2    |		|J  ww|
         |( v )|	|  &  |		| /\{)|
         | \ / |	|     |		| \/% |
         |  .  |	|  &  | 	|   % |
         |____V|	|____Z|		|__%%[|
)";
				cin >> thirdCard;
				cout << endl;
				if (thirdCard == 1)
				{
					cout << "Tu decision ha sido correcta. Puedes continuar aventurero";
					system("pause > nul");
					estadoJuego = endGame;
				}
				else
				{
					cout << "No has logrado superar mi desafío - dice el anciano." << endl;
					system("pause > nul");
					estadoJuego = badEnding;
				}
			}
			break;

		case badEnding:
			system("cls");
			cout << "Te moriste.\n\xa8Quieres volver a intentar?\n1. Si.\n2. No." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				estadoJuego = startMenu;
			}

			else
			{
				cout << "Al menos lo intentaste." << endl;
				volverAJugar = false;

			}
			break;
		case finalSolo:

			break;

		case finalConMizuki:

			break;

		case finalConAthor:

			break;

		case endGame:
			cout << "aca va el endGame mas piola con todos vivos" << endl;

			break;

		case fin:
			cout << "LLEGASTE AL FINAL, LOGRASTE ESCAPAR. \nOjala hayas disfrutado.\n1 \xa8Quieres volver a jugar?\n1. Si.\n2. No." << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				estadoJuego = startMenu;
			}

			else
			{
				cout << "Nos re vimos maquinola bestia de las praderas" << endl;
				volverAJugar = false;
			}

				break;

			} //fin del switch

		} //fin del while


		system("pause > nul");
		return 0;
	}