#include <math.h>

void fun(int *n);
int n;
int Arr[n>=i];

int main(){

        printf("Please enter integer value for (n):\n");
        scanf("%d", &n);
        printf("You entered %d\n", n);

        /*fun(&n);
        printf("%d\n", n);*/
        int i;
        int c;
        for (i=1; n>=i;){
                Arr[n] = fun(&n);
                printf("\n%d,", Arr[n]);
        }
        /*for(c=0; c<40; c++){ 
		printf("%d,", n );
        printf("\n%d,", n);
        }*/
}

void fun(int *n){

        if(*n % 2 == 0){
                *n = *n/2;
                /*printf("%d",*n);*/
        }
        else{
                *n = (*n*3)+1;
                /*printf("%d", *n);*/
        }

