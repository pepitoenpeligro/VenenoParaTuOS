#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "A la Ana la Sevillana, a la Ana la Sevillana," << endl;
	cout << "no me da miedo de ti maricón, de nunca," << endl;
	cout << "a la Ana la Sevilla cuando fui yo a tu casa " << endl;
	cout << "para que a mi ex novio el andrea el italiano le pusieras el mentón" << endl;
	cout << "que me cobraste 33 mil pesetas, acuerdate" << endl;
	cout << "la tenias tumbá en el sofá allí con tres litros" << endl;	
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/travestis/sevillana.mp3 &");
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
