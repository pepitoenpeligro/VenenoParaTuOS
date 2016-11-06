#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Esta es una copia que me quiere copiar a mí" << endl;
	cout << "Y se quiere hacer famosa a costa mía" << endl;
	cout << "y no se va a hacer famosa" << endl;
	cout << "porque no me sale de las pencoletas del tras tras" << endl;
}

void Audio(){
	// Modificar tiempo
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/copia.mp3  &");
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
