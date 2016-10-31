#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Sí, la conozco perfectamente" << endl;
	cout << "Sí, ella,mira, p(r)esisamente," << endl;
	cout << "en el año 96, yo fui a actuar a" << endl;
	cout << "Isla Fantasia" << endl;
	cout << "Entonces, como Carmen de Mairena dice" << endl;
	cout << "es curpa por mi marido, el Italiano" << endl;
	cout << "me acomplejó de que yo no tenía culo" << endl;
	cout << "cuando sabéis todos que yo en el  Mississippi" << endl;
	cout << "tenía un culo espectacular" << endl;
	cout << "total, que yo, mi amiga Paca La Piraña" << endl;
	cout << "que ella la conose, que le puso" << endl; 
	cout << "Un litro y medio en cada teta, " << endl;
	cout << "ella inyestando y un perro que tiene" << endl;
	cout << "que es un de esto" << endl;
	cout << "como se llama esto de loh ojos azules," << endl;
	cout << "un hasky, era el enfermero era" << endl;
	cout << "el que pasaba la lengua, ashín mismo" << endl;
	cout << "total que la llamé por teléfono"<< endl;
	cout << "y le digo Marisol mira, por favor" << endl;
	cout << "ponme un cuartito, y me puso un cuarto que me cobró" << endl;
	cout << "en el cuarto valía 25000 peseta que entonces" << endl;
	cout << "cobraba 100 mil peseta el litro, y no ponía silicona" << endl;
	cout << "era ASEITE DE AVIONES, ACEITE DE AVIONES" << endl;
	cout << "ASHIN DE CLARO" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/marisol/cirujana.mp3 trim 00:14 63 &");
}

int main(int argc, char* argv[]){
	
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

