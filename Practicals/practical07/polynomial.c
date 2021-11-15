#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int n){
    // initialising my variables
    int i, fact = 1;
    // The 0! case
    if(n==0){
        return 1;
    }
    // The non-zero cases
    for(i=1; i <= n; i++){
        fact = fact*i;
    }
    return fact;

}

double compute_polynomial(int n, double x){
    double sum = 0.0;
    int i;
    // This loop adds x^i/i! to sum, for a given x up to i=n
    for(i = 0; i <= n; i++){
        sum = sum + ((double)pow(x,i)) / factorial(i);
    }
    return sum;
}

int main(){
    //initalising my variables
    int order_of_polynomial, size_of_array;
    double* array_of_terms;
    int i, x=1.0;

    /*printf("%d\n", factorial(5)); //These are here just to check that they work as intended
    printf("%0.20f\n", compute_polynomial(10,1));*/

    printf("Enter the order of polynomial: \n");
    scanf("%d", &order_of_polynomial);

    // Defing our array size and allocating space in memory
    size_of_array = order_of_polynomial +1;
    array_of_terms = (double *)malloc(size_of_array * sizeof(double));

    // assigning each entry in the array, array[i] to a polynomial of order i
    for(i=0; i< size_of_array; i++){
        array_of_terms[i] = compute_polynomial(i,x);
        printf("f[%d] = %0.20lf\n", i, array_of_terms[i]);
    }
    
    // Printing the value of e
    printf("e1 = %0.20lf\n", exp(1));

    // Here we compare each order polynomial with the numerical value of e 
    // My guess for why the estimate difference becomes negative at the 13th term is to with floating point arithmetic
    for(i = 0; i<size_of_array; i++){
        printf("Estimate difference for term %d is %0.20lf\n", i, exp(1)- array_of_terms[i]);
    }

    // We no longer need this array so we can free up space in the memory
    free(array_of_terms);
    array_of_terms = NULL;
    
    return 0;
}