#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

void Texto(){
	

	cout << " Para que os quedeis muertas, no quiero " << endl;
	cout << " ni limusinas, ni \"porches\", nada. " << endl;
	cout << " Voy a sacar un coche con tres ruedas." << endl;
}


void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/boda/limusina.mp3  &");
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
