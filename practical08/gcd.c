#include<stdio.h>

/** Declaring Functions **/
int gcd(int a, int b);
int recursivegcd(int a, int b);

int main(void){
    int a,b,err;

    printf("Enter two numbers\n");
    err = scanf("%d %d",&a,&b);

    if(err != 2){
        return 1;
    }

    if(a <= 0 && b <=0){
        printf("The numbers are not greater than 0");
        return 1;
    }

    printf("The gcd of two numbers using regular method for %d and %d is %d\n",a,b,gcd(a,b));
    printf("The gcd of two numbers using recursive method for %d and %d is %d\n",a,b,recursivegcd(a,b));

}

/** Implementing Function **/
int gcd(int a, int b){
    int rem;

    /** looping until b is not equal to 0 **/
    while (b != 0)
    {
        rem = a%b;
        if(rem == 0){
            break;
        }else{
            a=b;
            b=rem;
        }
    }
    return b;
}

/** Implementing gcd using recursive method **/
int recursivegcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return recursivegcd(b,a%b);
    }
}