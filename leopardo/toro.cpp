#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Mira, tú lo que me tienes es envidia. " << endl;
	cout << "Sois una copia, queréis copiarme, y os coméis con perdón" << endl;
	cout << "una plasta mierda dun toooro." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/leopardo/toro.mp3 &");
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

