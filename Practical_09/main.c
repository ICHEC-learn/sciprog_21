#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

int main() {

        /*take input from user for number of sides*/
        int n;
        printf("Enter the square side:\n");
        scanf("%d", &n);

        /*allocate memory for array*/
        int i;
        int ** magicSquare = malloc(n * sizeof(int));


        for(i = 0; i < n; i++) {
                magicSquare[i] = malloc(n * sizeof(int));
        }

        int j;

        /*take user input for elements in array for each row*/
	for(i = 0; i < n; i++) {
                printf("Enter the elements in row #%d, separated by blanks and/or linebreaks:\n", i+1);
        for(j = 0; j < n; j++) {
                scanf("%d", &magicSquare[i][j]);
        }

}

        /*call function to see if square is madic*/
        printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "is" : "is NOT");

        /*free memory no longer needed*/
        for(i = 0; i < n; i++) {
                free(magicSquare[i]);
         }
        free(magicSquare);

        return 0;
}

