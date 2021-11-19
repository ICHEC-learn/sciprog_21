#include <stdio.h>
#include <stdlib.h>

/*declare function that takes two pointers as inputs*/
void fib(int *a, int *b);

int main(){
        /*declare variables*/
        int n1 = 0;
        int n2 = 1;

        int n, i;
        /*take input for n from user*/
        printf("Enter int got n:\n");
        scanf("%d", &n);
        
        /*if n is less then one exit program*/
        if (n<1){
                exit(1);
        }

        /*print statement for fibonacci sequence*/
        printf("The Fibonacci sequence is: \n");
        printf("%d, ", n1);
        /*loop to call function that calculates fibonacci sequence for values upto n*/
        for (i = 1; i<n-1; i++){
                fib(&n1, &n2);
                
                printf("%d,", n1);
        }

        fib(&n1, &n2);
        printf("%d\n", n1);

        return 0;
}
/* fib function that takes two pointers as inputs*/
void fib(int *a, int *b){
        int next;
        next = *a + *b;
        *a = *b;
        *b = next;
}


