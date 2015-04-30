#ifndef AUTOMATA_H
#define AUTOMATA_H

class Automata{
	private:
	{
		//Atributos (quintupla)
		Estado conjunto_estados; // de la definicion de la clase Estado podemos saber cuales son finales
		Estado estado_inicial;
		bool determinista; //indica 1 si el automata es determinista 0 en caso contrario
		//Constructores
		Automata ();	
	}
	
	public:
	{
		//primer parametro donde inicia, segundo con que caracter se mueve
		void setEdoInicial (int *, char*);
		void setConjuntodeEstados (int **, char **);
		bool validarPalabra(string);
		
	}
}
#endif