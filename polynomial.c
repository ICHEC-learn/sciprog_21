#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n){
        int i;
        int fact = 1;

        if (n==0)
                return 1;
        for (i = 1; i <= n; i++)
                fact = fact * i;
        return fact;
}

double compute_polynomial(int n, int x){
        double sum = 0.0
        int i;

        for(i = 0; i<=n; i++)
                sum = sum + (double)pow(x,i) / factorial(i0;
        return sum;
}
int main(){

        int order_of_polynomial;
        int size_of_array;
        double* array_of_terms;
        int i, x=1;

        printf("Enter order of polynomial:");
        scanf("%d", &order_of_polynomial +1;
        array_of_terms = (double *) malloc(size_of_array * sizeof(double));

        for(i = 0; i< size_of_array; i++){
                array_of_terms[i] = compue_polynomial(i,x);
                printf("Estimate difference for term %d is %0.20f\n", i, exp(1) - array_of_term[i]);

        free(array_of_terms);
        array_ofterms = NULL;

        return 0;

}

