#include<stdio.h>

void main()
{
    int n=5,p=3,q=4; //initializing size of the matrix
    double A[n][p],B[p][q],C[n][q]; //declaring matrix
    int i,j,k;
    //initializing matrix C
    for (i = 0; i < n; i++)
    for (j = 0; j < q; j++)
        C[i][j]=0.0;

    //initializing matrix A
    for (i = 0; i < n; i++)
    for (j = 0; j < p; j++)
        A[i][j]=i+j;
    
    //initializing matrix B
    for (i = 0; i < p; i++)
    for (j = 0; j < q; j++)
        B[i][j]=i-j;
    
    //matrix multiplication
    mm(n,p,q,A,B,C);
    
    //Printing Matrix A
    printf("\n This is Matrix A:\n\n");
    for (i = 0; i < n; i++)
    {
    for (j = 0; j < p; j++)
    printf("%3.0f ",A[i][j]);
    printf("\n");  
    }

    //Printing Matrix B
    printf("\n This is Matrix B:\n\n");
    for (i = 0; i < p; i++)
    {
    for (j = 0; j < q; j++)
    printf("%3.0f ",B[i][j]);
    printf("\n");  
    }

    //Printing Matrix C
    printf("\n This is Matrix C:\n\n");
    for (i = 0; i < n; i++)
    {
    for (j = 0; j < q; j++)
    printf("%3.0f ",C[i][j]);
    printf("\n");  
    }
}
