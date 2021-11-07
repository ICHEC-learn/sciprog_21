#include<stdio.h>

   // Main function

   int main (void) {

   // Declaration of the funtions
   // Three integers describe the dimension of the matrix
   // Memory is reserved for the elements of the matrix as double precision

   int n=5, p=3, q=4;
   double A[n][p], B[p][q], C[n][q];
   int i, j, k;

   // The matrix are initialized

   // First matrix A
   // Two for loops are needed
   // For i=0 all the values of j are calculated, then for i=1 up to i<n
        for(i=0; i<n; i++) {
          for (j=0; j<p; j++) {
            A[i][j]=i+j;
           }
        }

   // Initialization of matrix B

        for(i=0; i<p; i++) {
          for (j=0; j<q; j++) {
            B[i][j]=i-j;
           }
        }

   // Initialization of matrix C

        for(i=0; i<n; i++) {
          for (j=0; j<q; j++) {
            C[i][j]=0.0;
           }
        }

   // Perform matrix multiplication (matrix A * matrix B)
   // Three loops are needed here
   // i is the number of rows of matrix C
   // j is the number of columns of matrix C
   // k is the number of columns of matrix A and rows of matrix B

        for(i=0; i<n; i++){
          for(j=0;j<q; j++){
            for(k=0; k<p; k++){
              C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
          }
        }

   // Printing the matrix

   // Matrix A
   // The same loop as above is displayed
   printf("\nThe matrix A is: \n\n");
         for(i=0; i<n; i++) {
           for (j=0; j<p; j++) {
              printf("%3.0f", A[i][j]);
           }
               printf("\n");
         }
   // Matrix B


   printf("\nThe matrix B is: \n\n");
        for(i=0; i<p; i++) {
          for(j=0; j<q; j++) {
            printf("%3.0f", B[i][j]);
          }
            printf("\n");
        }

   // Matrix C

   printf("\nThe matric C is: \n\n");
        for(i=0; i<n; i++) {
          for(j=0; j<q; j++) {
             printf("%3.0f", C[i][j]);
        }
             printf("\n");
          }

   return 0;
   }

