#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*declaring two functions the first calculate the hyperbolic tangent using thw Maclaurin series and the second calculates using logs*/
double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){
        /*take the desired precision for the series from the user as an input*/
        double prec;
        printf("Enter precision for Maclaurin series:\n");
        scanf("%lf", &prec);
        /*take the beginning and end points from the user*/
        double begin, end;
        printf("Enter the start and finish points for x:\n");
        scanf("%lf, %'lf", &begin, &end);

        /*find size*/
        double a = ((fabs(begin) + fabs(end))/prec) +1.;
        int asize = a;

        /*create arrays to store results from the two functions*/
        double tan1[asize];
        double tan2[asize];
        double i;
        int j = 0;

        /*from the defined beginning points to the defined end points call the two functions and save the results into two seperate arrays*/
        for(i=begin; i<=end; i+=prec){
                tan1[j] = arctanh1(i, prec);
                tan2[j] = arctanh2(i);
                /*print the difference*/
                printf("Diff between tan1[%.3lf] and tan2[%.3lf] is %.10lf\n", i, i, fabs(tan1[j] - tan2[j]));
                j++;
        }

        return 0;

}
/*function to calculate the hyperbolic tangent using the Maclaurin series*/
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

/*function the calculate the hyperbolic tangent using logs*/
double arctanh2(const double x){
        return (log(1+x) - log(1-x))/2;
}
