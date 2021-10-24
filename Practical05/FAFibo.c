#include <stdio.h>
#include <stdlib.h>

void fibo(int *a, int *b);

int main() {

// Declaration of the varible
// printf command
// scanf command will have the user type an integer value

   int n;
   printf("Enter a positive integer for n: \n");
   scanf("%d", &n);

// Setting of the conditions for values below 1

   if (n < 1) {
      printf("Number less than 1\n");
      exit(1);

    }

    int n1 = 0;
    int n2 = 1;

    printf("The Fibonacci sequence is \n");
    printf("%d, ", n1);

// After Fibonacci function part is written below return

// Declaration of i
// Start of the loop
// The fibo function can now be called (remembering that it was decleared as pointers)

   int i;
   for (i = 1; i < n-1; i++) {
       fibo(&n1, &n2);
       printf("%d, ", n1);
   }   
   
// Printing out the last term

    fibo(&n1, &n2);
    printf("%d\n", n1);
    

   return 0;
}  

// FIBONACCI FUNCTION

// In the declaration the fibo funtion is a void function with no return applied and 2 input pointers

void fibo(int *a, int *b) {

// Declaration of value 'next'
// next is given by a sum of pointers
// *a will have the same value of a, the same works for *b   

   int next;
   next = *a + *b;

// *a is set to have the same value as *b
// *b is set equal to next, creating a sort of loop

   *a = *b;
   *b = next;

}

