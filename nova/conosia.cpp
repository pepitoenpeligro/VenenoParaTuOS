#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "Mira, no, déjame, que me deje, que me heeiii" << endl;
	cout << "Mira, sabes lo que te digo Pocahontas, Gerónimo, que te voy a decir en tu cara" << endl;
	cout << "Yo nunca en la vida te he visto, yo soy conocia mundiar" << endl;
	cout << "¿Donde eres conocía?,tu eres conocia desde aquí a Vallecah" << endl;
	cout << "Tu eres un maricón como un piano, eres un tio" << endl;
	cout << "a tomar por culo " << endl;
	cout << "enseña las tetas que tienes de obesa, petarda" << endl;
	cout << "yo soy ordinaria, pero tengo más clase que tú " << endl;
	cout << "no vengo a un plató de television a crrrri-criticar a la Tamara como tu" << endl;
	cout << "maricón, con acento en la O" << endl;
	cout << "ashin mismo" << endl;
	cout << "que vives del cuento, yo soy ordinaria pero tengo más clase que tú" << endl;
	cout << "y he-me-he tirado a los tios más guapos del mundo " << endl;
	cout << "pero tú con esa cara de mona de tarzán, ¿a quién te vas a tirar?" << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/nova/leopardo.mp3 trim 01:03 00:49.2 &");
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


