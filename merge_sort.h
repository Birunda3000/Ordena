#ifndef MERGE_SORT_H
#define MERGE_SORT_H

/*
Equipe:
	- Vinicius Eduardo
	- Francisco Bruno
	- Matheus Costa
	- Gabriel Furtado
*/

#include <stdlib.h> // Malloc, calloc, realloc, free

void intercalar(int *v, int ini, int meio, int fim) {
	int w[fim+1];
	for(int k = ini; k <= fim; k++)
		w[k] = v[k];
	int i = ini;
	int j = meio + 1;
	for(int k = ini; k <= fim; k++) {
		if(i > meio) v[k] = w[j++];
		else if (j > fim) v[k] = w[i++];
		else if (w[i] < w[j]) v[k] = w[i++];
		else v[k] = w[j++];
	}
}

void mergeSort(int *v, int ini, int fim) {
	if(ini < fim) {
		int meio = (ini + fim)/2;
		mergeSort(v, ini, meio);
		mergeSort(v, meio+1, fim);
		intercalar(v, ini, meio, fim);
	}
}

# endif
