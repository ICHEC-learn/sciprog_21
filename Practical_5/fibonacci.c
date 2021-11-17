#include <stdio.h>
#include <stdlib.h>

void fib(int *a, int*b);

int main(){

        int n1 = 0;
        int n2 = 1;

        int n, i;
        printf("Enter int got n:\n");
        scanf("%d", &n);

        if (n<1){
                exit(1);
        }

        printf("The Fibonacci sequence is: \n");
        printf("%d, ", n1);
        for (i = 1; i<n-1; i++){
                fib(&n1, &n2);
                printf("%d,", n1);
        }

        fib(&n1, &n2);
        printf("%d\n", n1);

        return 0;
}

void fib(int *a, int *b){
        int next;
        next = *a + *b;
        *a = *b;
        *b = next;
}


