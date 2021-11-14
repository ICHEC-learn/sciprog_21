// Iterative and recursive version of Euclid's Algorithm
// Objective: calculate the GCD of two positive integers

#include <stdio.h>

// FUNCTIONS DECLARATION

// Function 1, iterative GCD

int iterativeGCD(int a, int b);

// Function 2, recursive GCD

int recursiveGCD(int a, int b);

// Main function

int main(void) {
   int a, b, error;

   printf("Please input two positive integers\n");
   error = scanf("%d %d",&a,&b);
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }

   if (a<=0 || b<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }

// Call functions

   printf("Iterative GCD(%d, %d)=%d\n", a, b, iterativeGCD(a,b));
   printf("Recursive GCD(%d, %d)=%d\n", a, b, recursiveGCD(a,b));

   return 0;
}


// FUNCTIONS DEFINITION

// Function 1, iterative GCD

int iterativeGCD(int a, int b) {
   int temp;
   while(b != 0) {
      temp=b;
      b=a%b;
      a=temp;
   }
   return a;
}

// Function 2, recursive GCD

int recursiveGCD(int a, int b) {
   if(b==0){
      return a;
   }
   else {
      return(recursiveGCD(b, a%b));
   }
}


