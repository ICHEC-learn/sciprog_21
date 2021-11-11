#include<stdio.h>
#include<math.h>

//declaring functions
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

//Maclaurin Series
double arctanh1(const double x, const double delta){
    double arcTan = 0;
    double elem;
    int n = 0;
    do{
        double c = 2*n + 1;
        elem = pow(x,c)/c; 
        arcTan = arcTan + elem;
        n++;
    }while(fabs(elem)>=delta); //exit loop when element is less than delta

    return arcTan;
}

//Natural Algorithm
double arctanh2(const double x){
    double res = (log(1+x) - log(1-x))/2;
    return res;
}

int main(void){

    double precision;

    printf("Enter the precision value\n"); //prompts user to enter precision value
    scanf("%lf",&precision); //store the precision
    double start,end;
    printf("Enter the start and end points \n"); //user to enter start and end points
    scanf("%lf, %lf",&start,&end); //store the start and end value

    printf("value of start and end is %lf and %lf\n",start,end);

    //size of array
    double size = ((fabs(start) + fabs(end))/precision) + 1.;
    int asize = size;
    double tan1[asize];
    double tan2[asize];
    double i;
    int j = 0;

    //loop to calculate inverse hyperbolic tangent using both the method
    for(i=start;i <= end;i = i+precision){
        tan1[j] = arctanh1(i,precision);
        tan2[j] = arctanh2(i);
        printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.9lf\n",i,i,fabs(tan1[j]-tan2[j]));
        j++;
    }
}