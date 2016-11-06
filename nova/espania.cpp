#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Pese a quien le pese, en ESPAÑA," << endl;
	cout << "En españa, hay dos, transexuales, famosasa internacionales," << endl;
	cout << "Bibiana Fernández y Cristina La Veneno" << endl;
	cout << "las demás son tarántulas" << endl;
	cout << "mierdas pichás en un palo." << endl;
	cout << "Ashín mismo" << endl;
	cout << "¿Qué currículum tiene esta tarántula?" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/espania.mp3 &");
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
