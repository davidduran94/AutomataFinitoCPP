#include <iostream>
#include <string>
#ifndef __AFD_H
#define __AFD

/*
	//se introduce una cadena como esta para construir el automata

	AFN = ({simbolo1, sinbolo2},{estado1, estado2},{funcion1,funcion_2}, estado_inicial, estado_final)
*/

//using namespace std;

class AFD
{

private:
	char simbolos[];
	string estados[];
	string estado_inicial;
	string estado_final;



public:
	//constructor
	afd(char simbolos[], string estados[], string estado_inicial, string estado_final);
	
	//metodos
	validar_palabra(string):
	validar_palabras(string[]);

	

};


#endif
