#include <stdio.h>
#include <math.h>

int main(void){

//Define the variables
	int n = 12;
	float a = 0;
	float  b, b_rad;

//Set value for b and convert to radients
	b = 60;

	b_rad = (M_PI* b) / 180;
	printf("The value of b in radients is %f\n", b_rad);

//Calculate the requested sum
	float sum = tan(0) + tan(b_rad);
	printf("Value of sum: %f\n", sum);

//Create loop

	int i;
	 for (i=5; i < 60; i= i + 5){
	 sum = sum + 2*tan(i*M_PI / 180);
	}
	sum = ((b_rad - a)/(2*n)) * sum;
	printf("Our calculated ssum is %f\n", sum);
	printf("The actual value is %f\n", log(2));


	return 0;
}
