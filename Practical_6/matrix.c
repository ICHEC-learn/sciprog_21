include<stdio.h>
int i,j,k;
int n=5, p=3, q=4;

int main(){
        double A[n][p], B[p][q], C[n][q];
        for(i=0; i<n; i++){
                for(j=0; j<p; j++){
                        A[i][j]=i+j;
                }
        }
        for(i=0; i<p; i++){
                for(j=0; j<q; j++){
                        B[i][j]=i-j;
                }
        }

        for(i=0; i<n; i++){
                for(j=0; j<q; j++){
                        C[i][j]=0.0;
                }
        }


        for(i=0; i<n; i++)
                for(j=0; j<q; j++)
                        for(k=0; k<p; k++)
                                C[i][j] = C[i][j]+B[i][j]*A[i][j];

        printf("Matrix A:\n");
        for(i=0; i<n; i++){
                for(j=0; j<p; j++){
                        printf("%3.0f", A[i][j]);
        }
                printf("\n");
        }

        printf("Matrix B:\n");
        for(i=0; i<n; i++){
                for(j=0; j<p; j++){
                        printf("%3.0f", B[i][j]);
        }
                printf("\n");
        }
                                                                                                                                                           1,1           Top
	printf("Matrix C:\n");
        for(i=0; i<n; i++){
                for(j=0; j<p; j++){
                        printf("%3.0f", C[i][j]);
        }
                printf("\n");
        }
        return 0;

}

