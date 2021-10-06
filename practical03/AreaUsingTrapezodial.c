#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846  /** defining value of PI **/

int main(void){

    float a = 0;
    float N = 12;
    float b = PI/3;
    int i;

    float sum = tan(a) + tan(b);  /** finding initial sum **/
    float b1 = 0;
    float d = b/12;
    for(i=0;i<11;i++){       /** generating a loop of 11 equdistant points **/
        b1 = b1 + d;
        sum = sum + (2.0*(tan(b1)));   /** Adding to the initial sum **/
    }

    float res = ((b-a)/(2.0*N))*sum;  /** multiplying the final sum to (b-a)/2N **/
    printf("The value of area is %f\n",res);
    printf("the value of log is %f\n",log(2));

    return 0;
}