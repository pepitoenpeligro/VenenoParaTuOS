#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Por favor, shh por favóh," << endl;
	cout << "Perdón, Gerónimo, Pocahontas, El Paaadreee." << endl;
	cout << "Mira, tu eres la educada, la fina," << endl;
	cout << "si eres un gladiadóh maricón," << endl;
	cout << "mira, en primer lugar te via desí una cosa," << endl;
	cout << "yo no he criticao a la bibi anderson," << endl;
	cout << "yo en el momento que critique " << endl;
	cout << "a la bibi anderson, " << endl;
	cout << "aqui está la maria patiño y todas, pedí perdon aquí" << endl;
}


void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/venenoNova1.mp3 trim 00:21.5 00:28.2 &");
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

