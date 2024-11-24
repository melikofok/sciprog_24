#include <math.h>
#include <stdio.h>


int gcd(int a, int b);
int recursivegcd(int a, int b);


int main(void){
	int a = 60;
	int b = 45;

	printf("The GCD of 60 and 45 iteratively is %d and recursively is %d\n", gcd(a,b), recursivegcd(a,b));


	return 0;
}


int gcd(int a, int b){
	int temp;

	while (b != 0){
		temp = b;
		b = a % b;
 		a = temp;
	}
	return(a);
}


int recursivegcd(int a, int b){
 if (b == 0){
	return (a);
 }
 else{
	return( recursivegcd(b, a%b));
 }
}
