/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "flip": Linguaggio "C":
			 		- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 			- "void random_init()" per l'inizializzazione del modulo.
			 			- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 		- Modulo "coin" ("coin.h"|"coin.c"): Simula il lancio di una moneta per 100 volte e conta il numero di occorrenze di "Head" e "Tail".
			 		- File "main.c" per la verifica dei moduli.
		 		
*/

#include <stdlib.h>

#include <time.h>

#include "random.h"

void random_init()
{
	srand(time(NULL));
}

int random_between(int min,int max)
{
	if(max<=min)
	{
		return min;
	}
	
	return (min+rand()%(max-min));
}