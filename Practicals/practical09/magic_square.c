#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

int main(){

    int n;
    printf("Enter the size of the square:\n");
    scanf("%d", &n);

    // Allocate a matrix
    int i;
    int ** magicSquare = malloc(n * sizeof(int));

    for(i=0; i<n ; i++){
        magicSquare[i] = malloc(n * sizeof(int));
    }

    int j;

    for(i=0; i<n; i++){
        printf("Enter the elements in row #%d, separated by blanks and/or linebreaks:\n", i+1);
        for(j=0; j<n; j++){
            scanf("%d", &magicSquare[i][j]);
        }
    }

    printf("The square %s magic. \n", isMagicSquare(magicSquare, n) ? "is": "is not");

    for(i=0; i<n ; i++){
        free(magicSquare[i]);
    }
    free(magicSquare);

    return 0;
}