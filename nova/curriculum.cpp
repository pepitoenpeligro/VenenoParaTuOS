#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "¿Donde está tu curriculum?" << endl;
	cout << "¿Qué portada de revista?" << endl;
	cout << "¿Tú quién eres, en España?" << endl;
	cout << "Eres, no eres nada, eres una tarántula más del montón" << endl;
	cout << "Tú sabes, lo que eres, que me quieres copiar a mí" << endl;
	cout << "y nunca, nunca serás como la veneno, nunca" << endl;
	cout << "nunca serás como la veneno querida" << endl;
	cout << "aprende a caminar con dos tacones, aprende" << endl;
	cout << "mira, con 44 años, sin sirugía, y estás limada" << endl;
	cout << "hasta el huevo te lo has limado" << endl;
	cout << "Ay, la sirugía, pues mira la cara" << endl;
	cout << "Que ponga, cuando estaba gorda, que era el anuncio del Michellin" << endl;
	cout << "JA JA JA JA JA" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/venenoNova1.mp3 trim 08:30 00:38.7 &");
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

