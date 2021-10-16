#include <stdio.h>
#include <math.h>

   int main(void){
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

   inum = 33554431;
   fnum = (float) inum;
/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';

   numdigits = ceil(logf(fnum)/logf(2));

   printf("The number of digits is %d\n",numdigits);

   printf("inum=%d, fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

}
         
