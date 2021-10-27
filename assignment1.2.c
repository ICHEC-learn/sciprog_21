#include<stdio.h>
#include<math.h>

float sum_geo(int n, float a, float r);
int n, i, j;
float a, r, S, sum;


float sum_geo(int n, float a, float r){

        sum = 0;
        for (i = 0; i<n; i++){
                sum = a*pow(r,(float)n);
                sum = a+sum;
        }
        return sum;
}

int main(void){

        for(i=0; i<=2; i++){
		printf("Please enter inte values for n:\n");
                scanf("%d,", &n);
                switch(n){
                        case 10000:
                                n = 10000;
                                a = 2.0;
                                r = 0.01;
                                S = (a*(1-pow(r,(float)n+1)))/(1-r);
                                printf("%f,", S);
                                printf("%f", sum_geo(n, a, r));

                                break;
                        case 500:
                                n = 500;
                                a = 0.01;
                                r = 0.01;
                                S = (a*(1-pow(r,(float)n+1)))/(1-r);
                                printf("%f,", S);
                                printf("%f", sum_geo(n, a, r));
				
				break;

                        case 100:
                                n = 100;
                                a = 0.0001;
                                r = 2.0;
                                S = (a*(1-pow(r,(float)n+1)))/(1-r);
                                printf("%f,", S);
                                printf("%f", sum_geo(n, a, r));


                                break;
                        default:
                                break;
                }
        }
}
                                                              58,1          Bot

