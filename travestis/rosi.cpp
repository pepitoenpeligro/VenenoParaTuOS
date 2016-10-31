#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;


void Texto(){
	cout << "y a y a y a la Sandra, y que que y que que has hecho con la rosi," << endl;
	cout << "con una, en dos tetas las hecho una, ehh, ha hecho destrozos" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/marisol/cirujana.mp3 trim 02:29.6 00:9.5 &");
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