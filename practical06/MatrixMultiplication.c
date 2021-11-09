#include<stdio.h>
#include<math.h>

int main(void){
    int n=5;
    int p=3;
    int q=4;

    double A[n][p], B[p][q], C[n][q];

    /** Initializing Matrix A **/
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            A[i][j] = i + j;
        }
    }

    /** Initializing Matrix B **/
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j] = i - j;
        }
    }

    /** Calculating Matrix C by A*B **/
    int k;
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j] = 0;
            for(k=0;k<p;k++){
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    /** Printing the matrix A **/
    printf("Matrix A \n\n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%3.0f ",A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B \n\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%3.0f ",B[i][j]);
        }
        printf("\n");
    }

    printf("Matrix C \n\n");
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%3.0f ",C[i][j]);
        }
        printf("\n");
    }
}