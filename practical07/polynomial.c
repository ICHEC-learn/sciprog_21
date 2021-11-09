#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/** Declaring functions **/
int fact(int n);
double compute_polynomial(int n,int x);

int main(void){
    int order;
    int size;
    double* arrayTerms;
    int i;
    int x=1;

    printf("Enter the order of polynomial\n");
    scanf("%d",&order);
    size = order + 1;
    
    /** Initializing the array using memory allocation **/
    arrayTerms = (double *)malloc(size*sizeof(double));

    for(i=0;i<size;i++){
        arrayTerms[i] = compute_polynomial(i,x);
        printf("f(%d) = %0.20f\n",i,arrayTerms[i]);
    }

    /** printing the true value of e **/
    printf("The true value of e is %0.20f\n",exp(1));

    /** Finding the difference between true value and calculated value **/
    for(i=0;i<size;i++){
        printf("The difference for term %d is %0.20f\n",i,exp(1) - arrayTerms[i]);
    }

    free(arrayTerms);
    arrayTerms = NULL;
    return 0;
}

/** Implementing the functions **/
int fact(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

double compute_polynomial(int n,int x){
    double sum = 0.0;
    int i;
    for(i=0;i<=n;i++){
        /** calculating the sum of polynomial **/
        sum = sum + (double)pow(x,i)/fact(i);
    }
    return sum;
}