######################################
## 			Veneno Frases 	   		##
######################################

##################
# @tput bold; -> negrita
# @tput smul; -> Inicio subrayado
# @tput rmul; -> Fin subrayado
#
#
# @tput setaf 0; -> Negro
# @tput setaf 1; -> Rojo sangre, rojo pasion, rojo puton
# @tput setaf 2; -> verde
# @tput setaf 3; -> Amarillo mierda
# @tput setaf 4; -> Azul mierda
# @tput setaf 5; -> Magenta
# @tput setaf 6; -> Cyan
# @tput setaf 7; -> White
# @tput setaf 8; -> gris oscuro
#
#
# @sgr0 -> Devuelve valores por defecto
###################

#brew install toilet
#sudo apt-get install

#@sudo apt-get install toilet
# Objetivos importantes
all: dependencias banner impresion rojo travestis verde marisol magenta nova negro propio restablecer install


dependencias:
	@echo Necesitas tener toilet
	@echo sudo apt-get install toilet

banner: 
	@toilet -f bigmono9 -F gay "La Veneno"
rojo: 
	@tput bold;
	@tput setaf 1;

verde:
	@tput bold;
	@tput setaf 2;

magenta:
	@tput bold;
	@tput setaf 5;

negro:
	@tput bold;
	@tput setaf 5;

transparente:
	@tput setaf 7;

restablecer:
	@tput sgr0;

	
# Objetivos agrupados por temática
# Rojo
travestis: rosi sandra manolo camellona sevillana rocio manola		

# Verde
marisol:  mopa boxer ATS amiga marranona aceite
	
#Rosa
nova: ordinaria carne perdon maradona espania vos talco popeye cuerpo conosia androcur fisna obesa
	
#Negro
propio: cuernos cansa
	


# Objetivos separados
ATS:
	g++ ./marisol/ATS.cpp -o ATS
	@echo "\t"Compilando el ATS $(@tput sgr0)
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

amiga:
	g++ ./marisol/amiga.cpp -o amiga
	@echo "\t"Compilando marisol
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

aceite: 
	g++ ./marisol/aceite.cpp -o aceite
	@echo "\t"Compilando aceite diigoo
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

mopa:
	g++ ./marisol/mopa.cpp -o mopa
	@echo "\t"Compilando mopa
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

ordinaria:
	g++ ./nova/ordinaria.cpp -o ordinaria
	@echo "\t"Compilando ordinaria
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

rosi:
	g++ ./travestis/rosi.cpp -o rosi
	@echo "\t"Compilando rosi
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

sandra:
	g++ ./travestis/sandra.cpp -o sandra
	@echo "\t"Compilando sandra
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

carne:
	g++ ./nova/carne.cpp -o carne
	@echo "\t"Compilando carne
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

perdon:
	g++ ./nova/perdon.cpp -o perdon
	@echo "\t"Compilando perdon
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

maradona:
	g++ ./nova/maradona.cpp -o maradona
	@echo "\t"Compilando maradona
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

espania:
	g++ ./nova/espania.cpp -o espania
	@echo "\t"Compilando espania
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

vos:
	g++ ./nova/vos.cpp -o vos
	@echo "\t"Compilando vos
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

talco:
	g++ ./nova/talco.cpp -o talco
	@echo "\t"Compilando talco
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

popeye:
	g++ ./nova/popeye.cpp -o popeye
	@echo "\t"Compilando popeye
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

cuerpo:
	g++ ./nova/cuerpo.cpp -o cuerpo
	@echo "\t"Compilando cuerpo
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

manolo:
	g++ ./travestis/manolo.cpp -o manolo
	@echo "\t"Compilando manolo
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

camellona:
	g++ ./travestis/camellona.cpp -o camellona
	@echo "\t"Compilando camellona
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

sevillana:
	g++ ./travestis/sevillana.cpp -o sevillana
	@echo "\t"Compilando sevillana
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

boxer:
	g++ ./marisol/boxer.cpp -o boxer
	@echo "\t"Compilando boxer
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

conosia:
	g++ ./nova/conosia.cpp -o conosia
	@echo "\t"Compilando conosia
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

rocio:
	g++ ./travestis/rocio.cpp -o rocio
	@echo "\t"Compilando rocio
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

manola:
	g++ ./travestis/manola.cpp -o manola
	@echo "\t"Compilando manola
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

cuernos:
	g++ ./propio/cuernos.cpp -o cuernos
	@echo "\t"Compilando cuernos
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

cansa:
	g++ ./propio/cansa.cpp -o cansa
	@echo "\t"Compilando cansa
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

androcur:
	g++ ./nova/androcur.cpp -o androcur
	@echo "\t"Compilando androcur
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

fisna:
	g++ ./nova/fisna.cpp -o fisna
	@echo "\t"Compilando fisna
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

obesa:
	g++ ./nova/obesa.cpp -o obesa
	@echo "\t"Compilando obesa
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

marranona:
	g++ ./marisol/marranona.cpp -o marranona
	@echo "\t"Compilando marranona
	@echo "\t"Fecha: Domigo 30 de Octubre de 2016 - 21:00 "\n"

impresion:
	@echo "\n\n######################################################################################"
	@tput smul;
	@echo Compilando todas las frases disponibles de la Veneno
	@tput rmul;
	@echo Fecha: Domigo 30 de Octubre de 2016 - 21:00
	@echo Disponibles: 28 "\n"
	@echo Hecho con mucho cariño por:
	@echo "\t"José Antonio Córdoba Gómez "\t\t\t" pepitoenpeligro@gmail.com
	@echo "\t"Marta Arenas Martínez "\t\t\t\t" martilla311@gmail.com
	@echo "\t"Miriam Mengíbar Rodríguez "\t\t\t" mirismr@gmail.com
	@echo "######################################################################################\n\n"


install:
	@echo Instalando en /usr/local/bin
	@cp ./{ATS,amiga,aceite,mopa,rosi,ordinaria,sandra,carne,perdon,maradona,espania,vos,talco,popeye,cuerpo,manolo,camellona,sevillana,boxer,conosia,rocio,manola,cuernos,cansa,androcur,fisna,obesa,marranona} /usr/local/bin

uninstall:
	rm /usr/local/bin/{ATS,amiga,aceite,mopa,rosi,ordinaria,sandra,carne,perdon,maradona,espania,vos,talco,popeye,cuerpo,manolo,camellona,sevillana,boxer,conosia,rocio,manola,cuernos,cansa,androcur,fisna,obesa,marranona}

clean: banner transparente
	@echo Limpiando todos los archivos ejecutables
	@tput sgr0;
	@rm ./{ATS,amiga,aceite,mopa,rosi,ordinaria,sandra,carne,perdon,maradona,espania,vos,talco,popeye,cuerpo,manolo,camellona,sevillana,boxer,conosia,rocio,manola,cuernos,cansa,androcur,fisna,obesa,marranona}

