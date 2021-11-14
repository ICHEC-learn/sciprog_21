#include<stdio.h>
#include<stdlib.h>
#include<math.h>

   // Function declaration and initialization

   // Function 1
   // Factorial funtion is included in the math library
   // i is going to be a loop integer
   // The first term of the factorial will be always equal to 1

   int factorial(int n) {
      int i;
      int fact = 1;

      if (n==0)
        return 1;

      for(i=1; i<=n; i++)
        fact = fact * i;
      return fact;
   }


   // Function 2
   // Function that computes the polynomials
   // This function needs to be double precision to return decimals

   double compute_polynomial(int n, int x) {
      double sum = 0.0;
      int i;

      for(i=0; i<=n; i++)
         sum = sum + (double)pow(x,i)/factorial(i);
      return sum;
   }


   // Main function

   int main() {

   // An array of unknown size is allocated

      int order_of_polynomial;
      int size_of_array;
      double* array_of_terms;
      int i, x=1;

      printf("Enter the order of polynomial: ");
      scanf("%d", &order_of_polynomial);

      size_of_array = order_of_polynomial + 1;

   // The type of the content of the array has to be specified
   // Then it has to be allocated through malloc

      array_of_terms = (double *) malloc(size_of_array * sizeof(double));

   // Loop over the array will be applied on the polynomial
         for(i=0; i<size_of_array; i++) {
            array_of_terms[i] = compute_polynomial(i,x);
            printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
         }

   // Printing the actual value

      printf("e1 = %0.20f\n", exp(1));

   // Printing the difference between the 2

      for(i=0; i<size_of_array; i++)
        printf("Estimate difference for term %d is %0.20f\n", i, exp(i) - array_of_terms[i]);

      free(array_of_terms);
      array_of_terms = NULL;

   return 0;
   }


