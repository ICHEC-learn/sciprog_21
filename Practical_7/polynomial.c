#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*declare and create factorial function*/
int factorial(int n){
        int i;
        int fact = 1;

        /*make sure that n isn't zero*/
        if (n==0)
                return 1;

        /*compute the factorial*/
        for (i = 1; i <= n; i++)
                fact = fact * i;
        return fact;
}
/*create function to compute polynomial using formula*/
double compute_polynomial(int n, int x){
        double sum = 0.0;
        int i;
        for(i = 0; i<=n; i++)
                sum = sum + (double)pow(x,i) / factorial(i);
        return sum;
}

int main(){
        /*declare vairables*/
        int order_of_polynomial;
        int size_of_array;
        double* array_of_terms;
        int i, x=1;

        /*get user input for degree of polynomial*/
        printf("Enter order of polynomial:");
        scanf("%d", &order_of_polynomial);
        size_of_array = order_of_polynomial + 1;
        /*allocate memory needed for array of terms using malloc()*/
        array_of_terms = (double *) malloc(size_of_array * sizeof(double));

        /*run through array and print polynomial and value for e*/
        for(i = 0; i< size_of_array; i++){
                /*run through array and print polynomial and value for e*/
        for(i = 0; i< size_of_array; i++){
                array_of_terms[i] = compute_polynomial(i,x);
                printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
        }
        printf("e1 = %0.20f\n", exp(1));

        /*print difference for term*/
        for(i = 0; i < size_of_array; i++)
                printf("Estimate difference for term %d is %0.20f\n", i, exp(1) - array_of_terms[i]);
        /*free memory no longer in use*/
        free(array_of_terms);
        array_of_terms = NULL;

        return 0;

}
                                                              59,1          Bot


                    
