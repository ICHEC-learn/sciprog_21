#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h"

int main(void){
    int n;
    int** magicSquare;
    printf("Enter the size for a square matrix");
    scanf("%d", &n);

    // Allocating the size of a matrix by dynamic memory allocation
    magicSquare = (int **)malloc(n*sizeof(int));

    int i;
    for(i=0;i<n;i++){
        magicSquare[i] = malloc(n * sizeof(int));
    }

    int j;

    /** scanning and storing the elements in an matrix **/
    for(i=0;i<n;i++){
        printf("Enter the row %d elements\n",i+1);
        for(j=0;j<n;j++){
            scanf("%d", &magicSquare[i][j]);
        }
    }

    /** checking whether the sqaure matrix is magic or not **/
    printf("The square matrix %s Magic",isMagicSquare(magicSquare,n) ? "is":"is NOT");

    /** deallocating the matrix **/
    for(i = 0;i<n;i++){
        free(magicSquare[i]);
    }

    free(magicSquare);

    return 0;

}