#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

void Texto(){
	cout << "Jamás he criticao a ninguna travesti." << endl;
	cout << "Yo sólo hablé de Bibiana Fernández porque cuando yo vine a madrid" << endl;
	cout << "nos llamaban MANOLO" << endl;
	cout << "entonces yo como no sabia quien era Manolo" << endl;
	cout << "a una amiga mia le dije Cati" << endl;
	cout << "¿por qué me llaman Manolo?" << endl;
	cout << "dice, por la Bibi, NADA MÁS" << endl;
	cout << "vine aqui y pedí perdón" << endl;
	cout << "En mi libro yo miento a BIBI y ANA FERNÁNDEZ" << endl;
	cout << "de  una de las más bellas" << endl;
	cout << "y la he respetao y pedí perdon que lo sabéis." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/travestis/manolo.mp3  &");
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
