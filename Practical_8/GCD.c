#include <stdio.h>

int recursiveGCD(int a, int b){
        if(b==0){
                return a;
        }
        else{
                return(recursive(b, a%b));
        }
}

int main(void){
        int a, b, error;

        printf("Please input two positive int\n");
        error = scanf("%d %d", &a, &b);
        if (error != 2 ){
                printf("Please try again\n");
                return 1;
        }

        if (a<=0 || b<=0){
                printf("These numbers are not positive!\n");
		return 1;
        }
        printf("Recursive gcd(%d, %d)", a, b, iterativeGCD(a,b));
        printf("Iterative gcd(%d, %d)", a, b, recursiveGCD(a,b));
        return 0;
}

int iterativeGCD(int a, int b){
        int temp;
        while(b != 0){
                temp = b;
                b = a%b;
                a = temp;
        }
        return a;
}
                                       
