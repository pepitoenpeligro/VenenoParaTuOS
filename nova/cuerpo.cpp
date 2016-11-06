#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Y lo digo y lo diré" << endl;
	cout << "Cuerpo y belleza como La Veneno no la ha habido en España" << endl;
	cout << "ashín de claro" << endl;
	cout << "y lo sabéis todos" << endl;
}

void Audio(){
	// Establecer audio
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/cuerpo.mp3 &");
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
