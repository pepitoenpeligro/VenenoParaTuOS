#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

void Texto(){
	cout << "Amigas mías, la sandra la camellona, tenía ..." << endl;
	cout << "se le encagreno to esto, que en paz descanse, está muerta." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/travestis/camellona.mp3 &");
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