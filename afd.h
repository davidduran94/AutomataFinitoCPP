/*****************************************************************/
	                  AUTOMATA FINITO DETERMINISTA
	  Instituto Politecnico Nacional
	  Escuela Superior de Computo 
	  Copiladores
	  Equipo:
	  	David Duran Rodriguez
/*****************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#define MAX 100
#ifndef __AFD_H
#define __AFD

using namespace std;

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
	void crearAutomata();
	void validar_palabra(string);
	void validar_palabras(string[]);

	

};


#endif
