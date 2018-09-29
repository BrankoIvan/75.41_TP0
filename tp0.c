#include "tp0.h"

void swap (int* x, int* y) {
	int aux = *x;
	*x = *y;
	*y = aux;
}

int maximo(int vector[], int n) {
	if(n == 0) return -1;
	int posicion = 0;
	for(int i = 1; i<n; i++){
		if(vector[i] > vector[posicion]) posicion = i;
	}
	return posicion;
}

int min(int a, int b){
	if (a<b) return a;
	return b;	
} 

int comparar(int vector1[], int n1, int vector2[], int n2) {
	for(int i = 0; i < min(n1, n2); i++){
		if(vector1[i]<vector2[i]) return -1;
		if(vector1[i]>vector2[i]) return 1;
	}	
	if(n1 == n2) return 0;
	if(n1 < n2) return -1;
	return 1;
}

void seleccion(int vector[], int n) {
	int posicion;
	for(int i = n; i>0; i--){
		posicion = maximo(vector, i);
		swap(&vector[posicion], &vector[i-1]);
	}
}

