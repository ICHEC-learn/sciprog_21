#include <stdio.h>

/*declaring teo functions to calulcate GCD, one iterative the other recursive*/
int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);

int main(void){
        int a, b, error;
	/*take user inout for two positive numbers*/
        printf("Please input two positive int\n");
        error = scanf("%d %d", &a, &b);
        if (error != 2 ){
                printf("Please try again\n");
                return 1;
        }
	/*make sure numbers inputted are positive*/
        if (a<=0 || b<=0){
                printf("These numbers are not positive!\n");
                return 1;
        }
	/*return values from the two functions are printed*/
        printf("Recursive gcd(%d, %d) = %d\n", a, b, recursiveGCD(a,b));
        printf("Iterative gcd(%d, %d) = %d\n", a, b, iterativeGCD(a,b));
        return 0;
}
/*iterative function using while look yo look remainer*/
int iterativeGCD(int a, int b){
        int temp;
        while(b != 0){
                temp = b;
                b = a%b;
                a = temp;
        }
        return a;
}
/*recursive loop where loop is run untill a%b = 0*/
int recursiveGCD(int a, int b){
        if(b==0){
                return a;
        }
        else{
                return(recursiveGCD(b, a%b));
        }
}
    
