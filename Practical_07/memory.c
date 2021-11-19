#include <stdio.h>
#include <stdlib.h>

/*create function that generates a ponter, which points to allocated memory*/
int* allocatearray(int n){
        int* array;
        /*use malloc() to allocate memory*/
        array = (int*) malloc(n* sizeof(int));
        printf("Array with size %d is allocated.\n", n);
        return array;
}

/*create function that takes pointer to array and fills that array with ones*/
void fillwithones( int* array, int n){
        int i;
        for(i=0; i<n; i++)
                array[i] = 1;
}
/*create function that takes pointer to array and prints that array*/
void printarray(int *array, int n){
        int i;
        for(i=0; i<n; i++);
                printf("%d", array[i]);
                printf("\n");
}
/*free allocated memort*/
void freearray(int* array){
        free(array);
        printf("Array is free!!\n");
}

int main(){
        int n;
        int* array_main;
        /*take user input for number of elements*/
        printf("Enter the number of elements in the array:");
        scanf("%d", &n);
        /*call functions*/
        array_main = allocatearray(n);
        fillwithones(array_main, n);
        printarray(array_main, n);
        freearray(array_main);
        array_main = NULL;

        return 0;

}

            
