#include <iostream>
using namespace std;

void Texto(){
	cout << "Donde está el ATS, donde está el ATS, el hasky ...  sebireeeñoo, anda maricon, el perro que era el enfermero. -Qué grasiosa ehhh(Marisol) " << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/marisol/cirujana.mp3 trim 12:12.4 00:11.7 &");
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
