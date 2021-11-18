#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/** Declaring functions **/
int* allocateArray(int n);
void fillwithones(int* array, int n);
void printarray(int* array,int n);
void freememory(int* array);

int main(void){
    int n;
    int* array;
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
    array = allocateArray(n);
    fillwithones(array,n);
    printarray(array,n);
    freememory(array);
    array=NULL;


    return 0;
}

/** Implementing the functions **/
int* allocateArray(int n){
    int* array;
    /** Initializing the array using memory allocation **/
    array = (int *)malloc(n*sizeof(int));
    return array;
}

/** Filling the Array with 1 **/
void fillwithones(int* array, int n){
    int i;
    for(i=0;i<n;i++){
        array[i] = 1;
    }
}

/** Printing the elements in the Array **/
void printarray(int* array, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

/** Deallocating the memory **/
void freememory(int* array){
    free(array);
    printf("Array deallocated\n");
}