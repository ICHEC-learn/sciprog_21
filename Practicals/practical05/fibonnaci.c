#include <stdio.h>
#include <stdlib.h>

void fibonnaci(int *first_number, int *second_number);

int main(){

    // initialising our variables
    // Asking the user to input a value that is read by the machine
    int n;
    printf("Enter a positive integer for n\n");
    scanf("%d", &n);

    // Give the code something to do if the user enters something else
    if(n < 1){
        printf("Number less than 1\n");
        exit(1);
    }
    int first_number = 0, second_number = 1;

    // printing the first term 
    printf("The Fibonnaci sequence is: \n");
    printf("%d, ", first_number);

    // printing from the 2nd term to the n-1th term
    int i;
    for(i = 1; i < n-1; i++){
        fibonnaci(&first_number, &second_number);
        printf("%d, ", first_number);
    }

    // Printing the last value in the sequence
    fibonnaci(&first_number, &second_number);
    printf("%d\n", first_number);
    return(0);
}

// defining the fibonnaci function
void fibonnaci(int *first_number, int *second_number){
    int next_number;
    next_number = *first_number + *second_number;
    *first_number = *second_number;
    *second_number = next_number;
}
//I'm aware it's spelled fibonacci