#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "En el menú va a haber carne, pescao, tiburón, de tó. " << endl;
	cout << "Alcachofas, moniatos, plátanos, bananas, de tó. " << endl;
	cout << "(periodista) ¿Y cómo va a ser la tarta?" << endl;
	cout << "La tarta va a zé, con perdón, dos huevos grandes asín, " << endl;
	cout << "y un buen pepino, bien hermoho, que llegue al techo. " << endl;
	cout << "Y luego una armeja bien enorme, no estoy diciendo una palabrota, ¿eh?" << endl;
	cout << "Una buena almeja, pal que quiera almeja, almeja, pal que quiera pepino, pepino." << endl;
	cout << "Y de primero un buen potaje con habichuelas, " << endl;
	cout << "pa que to la noche se estén peyendo, pa que se acuerden de la boda de la Veneno." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/leopardo/leopardo.mp3 trim 06:04 34.7 &");
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

