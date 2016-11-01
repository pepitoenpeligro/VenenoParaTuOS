#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Ay, espérate un momento, que se me ha olvidado" << endl;
	cout << "No sé como ponerme fisna" << endl;
	cout << "Me quiero poner fisna como la que vino los otros días que dice" << endl;
	cout << "Mira me he tomao dos pastillas de androcurs y me ha cambiao la vos." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/androcurs.mp3 trim 0:00.4 00:13.6 &");
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







