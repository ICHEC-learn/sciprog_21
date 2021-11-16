// Inclusion of main libraries

#include<stdio.h>
#include<stdlib.h>

// The next include statement is different, it contains quotation marks, which tells the compiler to look for what it needs locally
// The header file is in the same directory, it is called magic_square.h

#include "magic_square.h"

int main() {

   int n;
   printf("Enter the square size:\n");
   scanf("%d", &n);

   // Allocate a matrix as an array of pointers
   // Each pointer is a row
   int i;
   int ** magicSquare = malloc(n * sizeof(int));

   // A loop of rows is needed in C

   for(i=0; i<n; i++) {
      magicSquare[i] = malloc(n * sizeof(int));
   }

   // Inputting integer data for each row in the matrix
   int j;
   for(i=0; i<n; i++) {
      printf("Enter the elements in row #%d, separated by blanks and/or linepreaks:\n", i+1);
      for(j=0; j<n; j++) {
         scanf("%d", &magicSquare[i][j]);
         }
   }

   // Checking if it 'is' or 'is not' a magic square
   printf("The square %s magic.\n", isMagicSquare(magicSquare, n)? "is" : "is NOT");

   // Freeing each row (seperately) before freeing the array of pointers 
   for(i=0; i<n; i++) {
      free(magicSquare[i]);
   }
   free(magicSquare);

   return 0;
}
