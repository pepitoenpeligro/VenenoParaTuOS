#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Mira, te digo casanova, o nova, o pollanova, como te llames. " << endl;
	cout << "Me tienes, me tenéis una enviidia, de siempre, que no me podéis ver." << endl;
	cout << "He sido la travesti más guapa del mundo," << endl;
	cout << "porque en Milán me llevé los tres títulos." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/leopardo/pollanova.mp3 &");
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

