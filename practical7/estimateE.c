#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int factorial (int x);


int main(void){

	int i, order;
	double x, *terms;

	//User Input
	printf("Enter an integer for the order of the polynomial\n");
	scanf("%d", & order);

	if (order < 0){
	printf("invalid input");
	exit(1);
	}

	terms = (double *)malloc(order * sizeof(double));

	//Generate the coefficient of each x
	for (i = 0; i < order; i++){
	    terms[i] = 1 / (double)factorial(i+1);
	}


	x = 1.0;
	for (i = 0; i < order; i++){
	x = x + terms[i];
	}
	free(terms);

	printf("e is estimated as %0.10lf, with difference %e\n", x, x - exp(1.0));

	return 0;

}


int factorial(int x){
    if (x < 0){
	printf("Must use positive number\n");
	return (-1);
	}
    else if (x == 0){
	 return 1;
    }
    else{
	return (x * factorial(x - 1));
    }
}
