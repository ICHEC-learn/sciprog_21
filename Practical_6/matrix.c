include<stdio.h>
/*declare all needed variables*/
int i,j,k;
int n=5, p=3, q=4;

int main(){
	/*declare arrays*/
        double A[n][p], B[p][q], C[n][q];
	/*create A matrix*/
        for(i=0; i<n; i++){
                for(j=0; j<p; j++){
                        A[i][j]=i+j;
                }
        }
	/*create B matrix*/
        for(i=0; i<p; i++){
                for(j=0; j<q; j++){
                        B[i][j]=i-j;
                }
        }
	/*create empty C matrix*/
        for(i=0; i<n; i++){
                for(j=0; j<q; j++){
                        C[i][j]=0.0;
                }
        }

	/*multiple A matrix with B matrix to get C matrix*/
        for(i=0; i<n; i++)
                for(j=0; j<q; j++)
                        for(k=0; k<p; k++)
                                C[i][j] = C[i][j]+B[i][j]*A[i][j];
	/*print all arrays*/
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

