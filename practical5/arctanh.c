#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double artanh1(double x, double delta);
double artanh2(double x);



int main(void){

	double delta;

	printf("Enter a real positive number delta\n");
	scanf("%lf", & delta);

	if (delta <= 0){
		printf("Invalid input\n");
		exit(1);
	}


	double x = -0.9;
	int length = 1000;
	int i=0;

	double tan1[length];
	double tan2[length];

	while ( x <= 0.9 && i < length){
	tan1[i] = artanh1(x, delta);
	tan2[i] = artanh2(x);
	printf("The dif at x=%lf is %.10lf\n", x, fabs(tan1[i] - tan2[i])); 
	x += 0.01;
	i++;
	}

	return 0;
}


double artanh1(double x, double delta){
	int n = 0;
	double power, elem;
	double sum = 0;
	do{
	    power = 2*n +1;
	    elem =  pow(x, power)/power;
	    sum += elem;
	    n++;
	} while  (fabs(elem) > delta);
	return  sum;
}

double artanh2(double x){
	return ( ( log(1+x) - log(1-x) )/2);
}
