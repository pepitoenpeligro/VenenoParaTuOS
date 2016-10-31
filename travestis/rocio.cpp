
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


void Text(){
	cout << "La Rocío de Sevilla,hace más de 30 años que le puso los pechos" << endl;
	cout << "la silicona se le fue abajo, que parecía las patas de elefante" << endl;
	cout << "eh que no se podia poner" << endl;
	cout << "y la pobrecita se la han tenido que quitar en la fe" << endl;
	cout << "que podeis llamar e informaro en el hospital la fe" << endl;
	cout << "le han quitao los pechos" << endl;
	cout << "porque los tiene encangrenaos como la que tiene lepra" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/marisol/cirujana.mp3 trim 05:16 00:18.3 &");
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
