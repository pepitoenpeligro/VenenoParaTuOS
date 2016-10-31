#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

void Text(){
	cout << "Bueno, mira cuando yo me vine a Madrid" << endl;
	cout << "a mí, que en paz descanse," << endl;
	cout << "la Manola, que todos conoceis a la Manola, y ella más," << endl;
	cout << "la Manola que vivía entonces también conmigo, me dijo" << endl;
	cout << "veneno, que se te han puesto unos cardenales enormes" << endl;
	cout << "claro, yo llamé Berenjeno de Barcelona" << endl;
	cout << "sí, un cirujano, le dije mira lo que me pasa" << endl;
	cout << "entonces me mandó cortisona que se llama trigon de pos" << endl;
	cout << "que ella lo conoce de sobra" << endl;
	cout << "dice ve, que te lo inyecten" << endl;
	cout << "precisamente, os podeis enterar por 'Descorporacion Dermoestetica'" << endl;
	cout << "yo me operaba los pechos" << endl;
	cout << "cuando un cirjuano plastico me vio eso" << endl;
	cout << "durante seis meses, durante dos veces a la semana" << endl;
	cout << "iba y me ponia unas placas ashín de hielo en el culo" << endl;
	cout << "y gracias a dios, se me quitó." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/marisol/cirujana.mp3 trim 04:15.1 00:43.8 &");
}

int main(){
	if(argc > 1 && (string)argv[1] == "audio"){
		Audio();
	}

	if(argc > 1 && (string)argv[1] == "texto"){
		Texto();
	}

	if(argc > 2 && (string)argv[1] == "texto" && (string)argv[2] == "audio"){
		Texto();
		Audio();
	}

	if(argc > 2 && (string)argv[1] == "audio" && (string)argv[2] == "texto"){
		Texto();
		Audio();
	}

	return 0;
}
