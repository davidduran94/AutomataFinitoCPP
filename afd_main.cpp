/*****************************************************************/
	                  AUTOMATA FINITO DETERMINISTA
	  Instituto Politecnico Nacional
	  Escuela Superior de Computo 
	  Copiladores
	  Equipo:
	  	David Duran Rodriguez
/*****************************************************************/

int main(int argc, char const *argv[])
{
	int opcion = 0;
	while (opcion<1 || opcion > 3){
		printf("\n-------------AUTOMATA FINITO DETERMINISTA----------");
		printf("\n1.- Ingresar automata");
		printf("\n2.- Validar palabra");
		printf("\n3.- Salir");

		switch(opcion){
			case 1 :
				afd
			break;
			
			case 2:
			
			break;
			
			case 3:
				printf("\nAdios!");
			break;
			
			default:
				printf("\nOpcion no valida, intente de nuevo");
			break;
		}

	}
	return 0;
}