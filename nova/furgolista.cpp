#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Pues marchate, maricón, si eres un circo" << endl;
	cout << "Mira, ponte de pie, mira la patas, un furgolista " << endl;
	cout << "¡Uy! qué circo" << endl;
	cout << "Un furgolista, mira la patas" << endl;
}



void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/furgolista.mp3 &");
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
