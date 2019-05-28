#include <stdio.h>
#include <iostream>
#include "merge_sort.h"

/*
Equipe:
	- Vinicius Eduardo
	- Francisco Bruno
	- Matheus Costa
	- Gabriel Furtado
*/

using namespace std;

void printVector(int *v, int size) {
	for(int i = 0; i < size; i++)
		printf("%i ", v[i]);
	printf("\n");
}

int main() {

	int v[] = {5, 3, 1, 4, 2, 8, 7, 6, 15, 23, 152, 3, 75, 7, 12, 17, 89};
	int size = sizeof(v)/sizeof(*v);
	printf("Tamanho: %i\n", size);
	printf("Antes de ordenar: ");
	printVector(v, size);
	mergeSort(v, 0, size-1);
	printf("Após ordenar:	  ");
	printVector(v, size);

	return 0;
}
