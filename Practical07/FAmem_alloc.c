#include<stdio.h>
#include<stdlib.h>

// Function definition
// The function will return a pointer

int* allocatearray(int n) {
    int* array;
    array = (int*) malloc(n * sizeof(int));
    printf("Array of size %d allocated.\n", n);
    return array;

}

// Separate function to fill every cell of an array with ones
// The function is void becuse we don't need a return type

void fillwithones(int* array, int n) {
   int i;
   for(i=0; i<n; i++) {
     array[i] = 1;
   }
}

// Function to take a pointer to an array of integers

void printarray(int *array, int n) {
   int i;
   for(i=0; i<n; i++) {
      printf("%d ", array[i]);
      printf("\n");
   }
}

// Last function to free the allocated memory to the array

void freearray(int* array) {
   free(array);
   printf("Array deallocated!\n");
}

// Main function
//
int main() {

   int n;
   int* array_main;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

// A pointer to an array is needed
// Since above there is a return array, array main needs to be specified

   array_main = allocatearray(n);
   fillwithones(array_main, n);
   printarray(array_main, n);
   freearray(array_main);
   array_main = NULL;

   return 0;
}

