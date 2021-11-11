#include<stdio.h>
#include<stdlib.h>

void main()
{
    int N, i;
    printf("Enter the value for N ");
    scanf("%d",&N); //prompt user to enter value of N

    int fib[12]={0,1};
    if (N<1) //exit if the value of N is less than 1
    {
        printf("\nNumber Less Than 1");
        exit(1);
    }
    else
    {
        printf("The Fibonacci Series Is\n");
        printf("%d, ",fib[0]);
        printf("%d",fib[1]);
        for (i = 2; i < N; i++)
        {
            fib[i]=fib[i-1]+fib[i-2]; //add the previous two values in an array
            printf(", %d",fib[i]);
        }
    }   
}
