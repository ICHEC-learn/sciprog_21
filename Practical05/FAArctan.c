#include <stdio.h>
#include <math.h>

// Declaration of the two functions
// const double will ensure that its value doesn't change

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main() {

// After funtions definition at the bottom the main function is completed
// Imputting the precision and the range (double precision)

   double prec;
   printf("Enter precision for the Maclaurin series:\n");
   scanf("%lf", &prec);

   double begin,end;
   printf("Enter the start and finish point for x:\n");
   scanf("%lf, %lf", &begin, &end);

// Creation of a variable that will define the size of the arrays in which the tan values will be stored during the loop

   double a = ((fabs(begin) + fabs(end))/prec) + 1.;

// Convert from double to int

   int asize = a;

// tan arrays will have the calculated size

   double tan1[asize];
   double tan2[asize];

// Loop varible that increments over the range

   double i;
   int j = 0;

   for (i = begin; i <= end; i+=prec) {

       tan1[j] = arctanh1(i, prec);
       tan2[j] = arctanh2(i);
       printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n", i, i, fabs(tan1[j] - tan2[j]));
       j++;
   }

   return 0;
}


// Functions definition

// arctanh1 function is initialized at 0 and then each element in the array, elem, will be equvalent to each individual element to the Maclaurin series


double arctanh1(const double x, const double delta) {
   double arcTan = 0;
   double elem;
   int n = 0;

// This do/while loop will do the operations only until the absolute value of the element (fabs(elem)) is greater or equal to the set precision, delta in this case

   do {

      double val = 2*n + 1;
      elem = pow(x, val)/val;
      arcTan += elem;
      n++;

   } while(fabs(elem) >= delta);
   return arcTan;

}

// Definition of the second funtion

double arctanh2(const double x) {
   return(log(1 + x) - log(1 - x)/2);
}

