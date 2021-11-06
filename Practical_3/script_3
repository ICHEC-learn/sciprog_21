#include <stdio.h>
#include <math.h>


main(){
        /*defining variables*/
        float a = 0.0, stepsize, b = 60.0, b_rad;
        int N = 12, i;

        /*converting b to radians as using gnu tan requires radians*/
        b_rad = (M_PI*b)/180.0;

        /*defining step size also in radians*/
        stepsize = M_PI*((b-a)/(2*N))/180.0;

        /*creating intial sum*/
        float sum = tan(a)+tan(b_rad);

        /*setting up for loop which will calculate sum for each section*/
        for (i=5; i<60; i=i+5){
                sum = sum+2*tan((M_PI*i)/180.0);
	}
        /*final answer is the stepsize multiplied by the sum of area sections*/
        float integration = stepsize*sum;

        /*print my answer and more accurate answer log(2)*/
        printf("\nArea under curve:%f\n", integration);
        printf("\nActually area under curve:%f\n", log(2.0));
return 0;
}

