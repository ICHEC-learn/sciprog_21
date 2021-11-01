#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1 += 1.0/i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      sum2 += 1.0/i;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum2- sum1;

   printf(" Difference between the two is %f\n",diff);

}
