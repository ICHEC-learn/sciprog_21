#include <stdio.h>
#include <stdlib.h>

/*declare function to calculate fibonacci sequence*/
void fib(int *a, int*b);

int main(){
        /*declare values for n1 and n2*/
        int n1 = 0;
        int n2 = 1;

        /*take user input for n*/
        int n, i;
        printf("Enter int n:\n");
        scanf("%d", &n);

        /*if n is negative exit*/
        if (n<1){
                exit(1);
        }

        /*print statement for fibonacci sequence*/
        printf("The Fibonacci sequence is: \n");
	printf("%d,", n1);
        /*call te function to calculate the fibonacci sequence upto n*/
        for (i = 1; i<n-1; i++){
                fib(&n1, &n2);
                printf("%d\n,", n1);
        }
        /*print statement for fib*/
        fib(&n1, &n2);
        printf("%d\n", n1);

        return 0;
}

/*create function to calculate fibonacci sequence*/
/*calculate seqeunce using formula given in practical*/
void fib(int *a, int *b){
        int next;
        next = *a + *b;
        *a = *b;
        *b = next;
}

