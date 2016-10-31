#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Texto(){
	cout << "¿Pero tú te llevas bien con La Veneno?" << endl;
	cout << "Yo nunca, pues claro que me he llevao siempre ha sido amiga mía" << endl;
	cout << "esa foto me la dió hace 14 años" << endl;
	cout << "Yo no he sio anuáh amiga nunca nunca en la vida tuya maricón" << endl;
	cout << "Yo fui a Isla Fantasía y te conoci por ella, maricón embustera" << endl;
	cout << "Yo no he sio amiga nunca tuya." << endl;
	cout << "Cuando medejzaste en el Hotel como un drogadicto, maricón!" << endl;
	cout << "Anda zo Fea, cartujana." << endl;
}

void Audio(){
	system("play -q /usr/local/bin/audiosVenenisticos/sounds/marisol/cirujana.mp3 trim 11:31 00:24 &");
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
