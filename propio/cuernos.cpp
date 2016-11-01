#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "¿Qué pasa que tu no pones los cuernos o qué?" << endl;
	cout << "Yo, no" << endl;
	cout << "No, qué valoh, a la vuelta de la esquina" << endl;
	cout << "cati pum pum pum guri guri tolón tolón" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/propio/cuernos.mp3 &");
}

int main(int argc, char * argv[]){

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

