#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*declare functions for calculating hyperbolic tangent using two different methods*/
double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){

        /*take user input for precision of Maclaurin series*/
        double prec;
        printf("Enter precision for Maclaurin series:\n");
        scanf("%lf", &prec);

        /*take user inputs for start and end points for series*/
        double begin, end;
        printf("Enter the start and finish points for x:\n");
        scanf("%lf, %'lf", &begin, &end);

        /*calculate a and assign value as size*/
	double a = ((fabs(begin) + fabs(end))/prec) +1.;
        int asize = a;

        /*create two different arrays of size asize which will be used to store results*/
        double tan1[asize];
        double tan2[asize];

        double i;
        int j = 0;

        /*calculate hyperbolic tangent using two different methods and store results in thw two arrays*/
        for(i=begin; i<=end; i+=prec){
                tan1[j] = arctanh1(i, prec);
                tan2[j] = arctanh2(i);
                /*print the difference*/
                printf("Diff between tan1[%.3lf] and tan2[%.3lf] is %.10lf\n", i, i, fabs(tan1[j] - tan2[j]));
                j++;
        }
/*create function that calculates the hyperbolic tangent using formula given in practical*/
double arctanh1(const double x, const double delta){
        double arcTan = 0;
        double elem;
        int n =0;
        do{
                double val = 2*n+1;
                elem =  pow(x, val)/val;
                arcTan += elem;
                n++;

        } while(fabs(elem) >= delta);
        return arcTan;
}

/*create function that calculates the hyperbolic tangent using logs*/
double arctanh2(const double x){
        return (log(1+x) - log(1-x))/2;
}
