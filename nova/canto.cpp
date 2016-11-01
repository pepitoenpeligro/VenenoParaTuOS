#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Sí canto" << endl;
	cout << "Es más noble, yo lo aseguro, ha de causarme mayor emosión" << endl;
	cout << "Ese beso, sin ser puro, uque va envuelto en una ilusión  " << endl;
	cout << "La Española cuando besa OLÉ, es que besa , de verdad " << endl;
	cout << "Y a ninguno le interesa, besar, por frivolidad " << endl;
	cout << "El beso, el beso, eeeell-beso, en España" << endl;
	cout << "se da, si se quiere, muy dentro del alma" << endl;
	cout << "Me puede dar un beso en la mano" << endl;
	cout << "Me puede dar un beso de heramno" << endl;
	cout << "Y así, me besará cuando quiera" << endl;
	cout << "Pero un beso de amor, no se lo doy a cualquiera" << endl;
	cout << "Ahora ella" << endl;
	cout << "Ahora ella" << endl;
	cout << "Que cante " << endl;

}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/venenoNova2.mp3 trim 10:25.24 01:09 &");
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

