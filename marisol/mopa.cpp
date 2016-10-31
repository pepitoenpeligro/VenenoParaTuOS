#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Que le has puesto a la Paca, las tetas, que pasa la mopa," << endl;
	cout << "se las puesto aquí, eh, y las puesto aquí" << endl;
}

void Audio(){

	system("play -q /usr/local/bin/audiosVenenisticos/sounds/marisol/cirujana.mp3 trim 02:23.7 00:03.9 &");
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