#include<stdio.h>
#include<stdlib.h>

void fibonacci(int *a, int *b);

void main()
{
int N, i;
printf("Enter the value for N "); //prompt user to enter value of N
scanf("%d",&N);

if (N<1) //exit if the value of N is less than 1
{
    printf("\nNumber Less Than 1");
    exit(1);
}
int n1 = 0;
int n2 = 1;

printf("The Fibonacci Series Is\n");
printf("%d",n1);

for(i = 1;i<N;i++)
{
    fibonacci(&n1,&n2); //calling fibonacci function
    printf(", %d",n1);
}
}

void fibonacci(int *a, int *b)
{
    int next = *a +*b; //add the previous two values
    *a = *b; //swap the address of a and b
    *b = next; //swap the address of b and next
}
