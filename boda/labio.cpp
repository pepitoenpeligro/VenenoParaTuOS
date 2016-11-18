#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

void Texto(){
	

	cout << "Me he comprao una lensería y unos vestidos." << endl;
	cout << "El día de mi boda, menudo escándalo." << endl;
	cout << "Me voy a poner como a la Maritrini, con el labio torcío ashin." << endl;
	cout << "Cantando \"Una estrella en el jardín\" ." << endl;
}


void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/boda/labio.mp3  &");
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
