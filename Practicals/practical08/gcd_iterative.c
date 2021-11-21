#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This is the iterative version of Euclids algorithim for the gcd of two positive integers


// Defining and declaring my iterative gcd
int GCD( int a, int b){

    int temp;
    int i = 1;
    while(b != 0){
        temp = b;
        b = a%b;
        a = temp;
        i +=1;
    }
    return a;
}

// Defining an declaring my recursive gcd
int gcd( int a, int b){
    if(b==0){
        return a;
    }
    else{
        gcd(b,a%b);
    }
}

// Our program

int main(void){
    int a, b, error;
    clock_t st, end; // For the timing exercise


    /*
    // Randomly generating two positive ints between 1 and 12;
    srand(time(NULL));
    a = (rand()%11)+1;
    b = (rand()%11)+1;
    */


    // User inputs two positive integer, the code checks the user input.
    printf("Enter two positive integers: \n");
    error = scanf("%d %d", &a, &b);
    if(error != 2){
        printf("Please try again, enter two positve integers: \n");
    }
    if(a <= 0|| b <= 0){
        printf("These numbers are not positive!\n");
        return 1;
    }
    
    // Printing to the screen the result of both gcd and GCD functions and calculating the time this takes.

    st = clock();
    printf("Using the iterative method their greatest common divisor of %d and %d is %d\n", a, b, GCD(a,b));
    printf("Using the recursive method their greatest common divisor of %d and %d is %d\n", a, b, gcd(a,b));
    end = clock();

    printf("Total time taken for this calculation: %f's\n", (double) (end-st)/CLOCKS_PER_SEC);

    return 0;
}