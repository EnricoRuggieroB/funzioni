/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "cai":
			 		Fornisce aiuto ad uno studente di scuola elementare ad apprendere la moltiplicazione.
			 		- Sottodirectory "v2":Versione N° 2: Linguaggio "C":
			 			- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 				- "void random_init()" per l'inizializzazione del modulo.
			 				- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 			- Modulo "cai" ("cai.h"|"cai.c"): Gestisce le operazioni legate alla scelta dei numeri e alla gestione delle risposte.
			 			- File "main.c" per la verifica dei moduli ed il calcolo delle risposte corrette tra 10 date.
		 			
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
	return (min+rand()%(max-min));
}