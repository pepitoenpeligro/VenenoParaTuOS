#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Y lo digo y lo diré" << endl;
	cout << "Cuerpo y belleza como La Veneno no la ha habido en España" << endl;
	cout << "ashín de claro" << endl;
	cout << "y lo sabéis todos" << endl;
	cout << "me han comparado con las bellezas más grandes de este pais" << endl;
	cout << "Raquel Welch \t Brigitte Bardot \t Ursula Andress." << endl;
	cout << "Cuando quiera, yo le reto a ella" << endl;
	cout << "Aquí en el plato que  nos desmaquillen y nos rapen la cabeza" << endl;
	cout << "Cuando quiera, a ver quien parece más mujer" << endl;
	cout << "Ella o yo" << endl;
	cout << "O si (no) quiere, tanto que dice que es cantante, cantamos, primero que cante ella y luego canto yo" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/venenoNova2.mp3 trim 03:59 00:32.5 &");
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
