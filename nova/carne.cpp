#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Mira, mi cara, sin operah" << endl;
	cout << "Tu tienes que metete en una máquina de triturar la caaarneeee " << endl;
	cout << "pa' zalí guapa " << endl;
	cout << "zal con minifalda" << endl;
	cout << "mira que piernas tengo, naturales" << endl;
	cout << "mira que piernas, mira que piernas, son mias, entiendes, enseña las tuyas." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/leopardo.mp3 trim 02:41.8 00:17.3 &");
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