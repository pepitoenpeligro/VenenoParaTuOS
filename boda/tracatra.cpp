#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

void Texto(){
	

	cout << "- Bueno, ¿qué opina mi albañil, querido esposo mio? " << endl;
	cout << "Esta noche, ¿qué me vas a haser? " << endl;
	cout << "+ No sé, como no tengo una limusina, no tengo nada, solamente un carro..." << endl;
	cout << "Tracatrá, y ya está. " << endl;
}


void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/boda/tracatra.mp3  &");
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
