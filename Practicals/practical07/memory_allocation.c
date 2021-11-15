# include <stdio.h>
#include <stdlib.h>

// Defining the allocatearry function
int* allocatearray(int n){
    int* array;
    // Allocates an integer array of size n in memory
    array = (int*)malloc(n * sizeof(int));
    printf("Array of size %d allocated. \n", n);
    return array;
}

// Defining the fillwithones function
void fillwithones(int* array, int n){
    int i;
    for(i=0; i<n; i++){
        //Assigns each element the value of 1
        array[i] = 1;
    }
}

//Defining the printarray function
void printarray(int* array, int n){
    int i;
    for(i=0; i<n; i++){
        // prints the value of each arry element on one line
        printf("%d  ", array[i]);
    }
    // Print a new line for readability
    printf("\n");
}
// Finally define the freearray/Deallocatearray function
void freearray(int* array){
    free(array);
    array = NULL;
    printf("Array freed!");
}

int main(){
    //Initialising the variables
    int n;
    int* array_main;

    //User enters an array size
    printf("Enter the number of elements in your array: \n");
    scanf("%d", &n);

    //Use our previously defined functions to do as the assignment asks
    array_main = allocatearray(n);
    fillwithones(array_main, n);
    printarray(array_main, n);
    freearray(array_main);
    return 0;
}