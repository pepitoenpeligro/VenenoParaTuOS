#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Antes de ser famosa, cuando yo era prostituta" << endl;
	cout << "Que no lo he negado " << endl;
	cout << "Con tó mi coño " << endl;
	cout << "Y tú también eres un pedazo de putón" << endl; 
	cout << "que pone los anuncios en el País y en el Mundo " << endl;
	cout << "Con otro nombre, como muchas cuantas " << endl;
	cout << "¿Qué te crees, que me he caído de una higuera?" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/venenoNova1.mp3 trim 09:31.6 00:12.9 &");
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
