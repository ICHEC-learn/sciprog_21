#include <stdio.h>


int main(void) {
  /* Declare variables */
  int i;
  float sum1, sum2, diff;


  /* First sum from 1 to 1000 */
  sum1 = 0.0;
  for (i=1; i<=1000; i++) {
    sum1 = sum1 + 1.0/i;
  }


  /* Second sum from 1000 to 1 */
  sum2 = 0.0;
  for (i=1000; i>0; i--) {
    sum2 = sum2 + 1.0/i;
  }

  /* Display the results */

  printf(" Sum1=%f\n",sum1);
  printf(" Sum2=%f\n",sum2);

  /* Find the difference of the two sums results, the value should be the same but the different approximation will lead to a discrepancy */
  diff = sum1 - sum2;

    printf(" Difference between the two is %f\n",diff);

}
