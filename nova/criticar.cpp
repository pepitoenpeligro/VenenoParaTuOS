#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "¿Por qué tiene que salir en un programa?" << endl;
	cout << "Criticándome a mí, diciéndome que soy una drogadicta" << endl;
	cout << "Cuando yo jamás he tomado droga" << endl;
	cout << "Porque si yo tomara droga, estaría delgada como ella" << endl;
	cout << "Puede que sea ella sea la que esté super enganchada que así esté tan delgada" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/criticar.mp3 &");
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
