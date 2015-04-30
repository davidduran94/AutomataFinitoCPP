#ifndef ESTADO_H
#define ESTADO_H


class Estado{
			private:{
				int numero;
				map<char, int> transiciones; // la posicion uno indica el numero del estado al que puedo ir y el char representa el simbolo
				//estos estados nos indican hacia donde se puede ir con el automata
				Estado estados[]; // si no tiene estados podemops decir que es un estdo final?
				bool final;
			}
			public:{
				
			} 
}