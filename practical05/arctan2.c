#include<stdio.h>
#include<math.h>

/** declaring functions arctanh1 and arctanh2 **/

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

/** implementing the function arctanh1 to find hyperbolic arc tangent using
Maclaurin series **/

double arctanh1(const double x, const double delta){
    double arcTan = 0;
    double elem;
    int n = 0;
    do{
        double c = 2*n + 1;
        elem = pow(x,c)/c;
        arcTan = arcTan + elem;
        n++;
    }while(fabs(elem)>=delta);

    return arcTan;
}

/** implementing the function arctanh2 to find hyperbolic arc tangent using
Natural logarithms **/

double arctanh2(const double x){
    double res = (log(1+x) - log(1-x))/2;
    return res;
}

int main(void){

    double precision;

    /** Input precision value **/
    printf("Enter the precision value\n");
    scanf("%lf",&precision);

    double start,end;

    /** Input the start and end values **/
    printf("Enter the start and end points \n");
    scanf("%lf, %lf",&start,&end);

    /** calculating the size of an array **/

    double size = ((fabs(start) + fabs(end))/precision) + 1.;
    int asize = size;
    double tan1[asize];
    double tan2[asize];

    double i;
    int j = 0;

    /** loop to generate values of arctanh1 and arctanh2 **/
    for(i=start;i <= end;i = i+precision){
        tan1[j] = arctanh1(i,precision);
        tan2[j] = arctanh2(i);
        printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.9lf\n",i,i,fabs(tan1[j]-tan2[j]));
        j++;
    }


}