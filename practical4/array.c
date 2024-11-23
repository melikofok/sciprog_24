#include <stdio.h>
#include <math.h>

float degtorad(float degrad);

float traprule(int n, float TanArr[n+1]);

int main(void){

//Define the variables
        int n = 12;
        float  a=0, b=60;
	float deg;
	float TanArr[n+1];

//Create loop

	int i;
        for (i=0; i < n; i++){
	 deg = i*5;
         TanArr[i] = tan(degtorad(deg));
	 printf("Value of TanARR[%d] = %f\n", i, TanArr[i]);
        }


	float sum  = traprule(n, TanArr);

	printf("Trapezoid result is %f\n", sum);
        printf("The actual value is %f\n", log(2));



        return 0;
}


float degtorad (float degrag) {
	float pi= 3.1415927;
	return( (pi * degrag)/180.0);
}


float traprule(int n, float TanArr[n+1]){
	float sum;
	int i;
	//Calculate the tan sum of a (0) and b (60) in radians
        sum = TanArr[0] + TanArr[n];
        printf("Initial vaalue of sum at x(0) and x(12): %f\n", sum);


        for (i=1; i<n; i++){
         sum = sum +  2* TanArr[i];
        }
	printf("Value of sum after the loop: %f\n", sum);

	//multiply the sum
        sum = ((degtorad(60) - degtorad(0))/(2*n))*sum;

	return sum;


}
