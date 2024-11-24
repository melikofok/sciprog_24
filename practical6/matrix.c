#include <math.h>
#include <stdio.h>
#define n 5
#define p 3
#define q 4

int main(void){
	//Declare Variables
	int i, j, k;

	double A[n][p];
	double B[p][q];
	double C[n][q] ;

	printf("Matrix A:\n");
	for (i =0; i < n; i++){
	   for (j =0; j < p; j++){
		A[i][j] = i +j;
                printf("%0.2f ", A[i][j]);

	 }
            printf("\n");

	}

        printf("Matrix B:\n");
	for (i = 0; i < p; i++){
           for (j = 0; j < q; j++){
                B[i][j] = i - j;

         	printf("%0.2f ", B[i][j]);
         	}
            printf("\n");
	}


	//Initialize C = 0
	for (i = 0; i < n; i++){
           for (j = 0; j < q; j++){
                C[i][j] = 0;
         }
        }


	//MAtrix Multiplication
        printf("Matrix C (after multiplication):\n");

	for (i=0; i < n; i++){
	 for ( j = 0; j < q; j++){
	  for (k = 0; k < p; k++){
		C[i][j] += A[i][k] * B[k][j];
		}
	  printf("%0.2f ", C[i][j]);
		 }
	printf("\n");
	}



	return 0;
}
