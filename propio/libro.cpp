#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "¿Pero te has leído mi libro?" << endl;
	cout << "Yo no me he leído tu libro" << endl;
	cout << "¿Qué pone en tu libro?" << endl;
	cout << "Pues mira, mi libro se llama, La Vida Iba en Serio" << endl;
	cout << "Po la mi 'El mío ni Puta Ni Santa'" << endl;
	cout << "¿Te gusta el título de mi libro?" << endl;
	cout << "Poh sí" << endl;
	cout << "'La Vida Iba En Serio'" << endl;
	cout << "Pos claro, la vida va en serio, aunque tu eres una falsa, pero bueno." << endl;
	cout << "No sabes lo que lo estoy vendiendo ehhh" << endl;
	cout << "Po bueno como yo venderé el mío también." << endl;
	cout << "Pero escucha, el mi libro se saca saca de un poema de Gil de Biedma (Jaime Gil de Biedma)." << endl;
	cout << "Yo no zé lo que es ezo." << endl;
	cout << "La verdad es que nos cuesta mucho que vengas, porque como siempre tienes una agenda tan apretada." << endl;
	cout << "Po sí mi arma, porque tengo el coño pegao pa atras." << endl;
	cout << "¿Porque tienes CÓOOMOOO?" << endl;
	cout << "El coño de porcelana, pegao pa atras." << endl;
}
void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/propio/lavidaibaenserio.mp3 &");
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
