   //The library is included in the code  
#include<stdio.h>


int main(void){

   //Declare two integers variables
   //and assign values
   int i1=10, i2=200;

   //Decleare two floats variables, single precision
   //and assign values
   float fl1=1.11, fl2=2.2222222;

   //Print the values of the two integers, format %d, and go to new line, format \n
   //and the two floats, format %.nf (floats with 5 decimal places)
   //new line again, format \n 
   printf("Two integers are %d %d\nand two floats are %.5f %.5f\n", i1, i2, fl1, fl2);

   //Print the values of the two integers, format %d
   //and the two floats, format %.nf (floats with 7  decimal places)
   //new line again, format \n 
   printf("Two integers are %d %d and two floats are %.7f %.7f\n", i1, i2, fl1, fl2);
//


return 0;
}
