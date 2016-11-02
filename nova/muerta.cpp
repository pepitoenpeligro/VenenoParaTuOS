#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Porque te quería ver en persona" << endl;
	cout << "Y cuando te he visto" << endl;
	cout << "Me he quedao muerta" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/venenoNova1.mp3 trim 08:19.6 00:3.6");
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
