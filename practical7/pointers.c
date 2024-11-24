#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int  *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freememory(int *p);



int main(void){

	int size = 4;
	int *array;

	array =  allocatearray(size);
	fillwithones(array, size);
	printarray(array, size);

	freememory(array);

	return 0;
}


int  *allocatearray(int n){
	int  *temp;
	temp = (int *)malloc(n *  sizeof(int));
	return (temp);
}

void fillwithones(int *p, int n){
	int i;
	for  (i = 0; i < n; i++){
		p[i] = 1;
	}
}

void printarray(int *p, int n){
	int i;
	for (i = 0; i < n; i++){
		printf(" %d ", p[i]);
	} printf("\n");
}


void freememory(int *p){
	free(p);
}
