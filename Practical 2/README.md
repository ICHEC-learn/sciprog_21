# PRACTICAL 1

**Conversion.c**

* This C Program helps in showing minute differences in value when converting integer to float and its Binary representation with total number of digits
* In order to make 'ceil' and 'logf' function work 'Math.h' library is included
* To compile Conversion.c use *gcc -o Conversion Conversion.c -lm* (where -lm is included to denote the library math)
* To execute use *./Conversion*
* Sample Execution Result:
    * The number of digits is 25
    * inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111
   
**Sum.c**

* This C Program helps in finding sum of 1+1/2+1/3+1/4+···+1/1000
* We can find minute differences of 0.000007 when setting loop from 1 to 1000 and 1000 to 1.
* In terms of Mathematics both the value should be same
* Execution Result:
  Sum1=7.485478
  Sum2=7.485472
  Difference between the two is -0.000007
