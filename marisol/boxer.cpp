#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Eres una ladrona,  hay que verte la cara" << endl;
	cout << "que eres un boxer." << endl;
	cout << "Has destrozao maricones, solamente por ganar" << endl;
	cout << "has destrozao maricones" << endl;
	cout << "y tu casa cuando llegaba, era una perrera" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/marisol/boxer.mp3 &");
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
