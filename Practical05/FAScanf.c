#include <stdio.h>

int main(void) {

// Declearing variables

   int i;
   double a;
   printf("Enter an int and a double, separately by (,)\n");
   scanf("%d, %lf", &i, &a);
   printf("You have entered %d, and %lf\n", i, a);

// Declearinng pointer variable

   int *pointer_to_i = &i;
   printf("The value i is %d\n", i);
   printf("The value i is also %d\n", *pointer_to_i);
   printf("The address of i is %d\n", &i);

   return 0;
}

