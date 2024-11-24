#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void fibseries(int *Fn1, int *Fn2);

int main(void){

	//Declare variables
	int n, i;
	double a;
	int f[n];

	//Ask User input
	printf("Enter an integer n\n");
	scanf("%d", & n);

	if (n < 1){
		printf("n must be greater or equal to 1");
		exit(1);
	}

	printf("Here is the Fibonacci series up to %d\n", n);


	//Set Initial Conditions
	f[0] = 0;
	f[1] = 1;
	printf("F[0]:%d \n F[1]:%d\n", f[0], f[1]);


	for (i = 2; i < n+1; i++){
	 fibseries(& f[1], & f[0]);
	  printf("F[%d]: %d\n", i, f[1]);
	}


	return 0;
}


void fibseries(int *Fn1, int *Fn2){
	int  Fn;
	Fn = *Fn1 + *Fn2;
	*Fn2 = *Fn1;
	*Fn1 = Fn;
}

