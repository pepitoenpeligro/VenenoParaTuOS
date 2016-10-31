#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Text(){
	cout << "Limpia la casa marranona " << endl;
	cout << "que tienes el coño que no te lo lavas, marrana" << endl;
	cout << "y las pelucas tenían hasta palominos. Tenían hasta raspa, maricón " << endl;
	cout << "boca rape, que tienes la boca que es un rape," << endl;
	cout << "boxer, que eres un boxer" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/marisol/cirujana.mp3 trim 10:12 00:22 &");
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