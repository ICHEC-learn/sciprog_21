#include<stdio.h>

int main (void)
{
    /** Declaring the variables n and d with datatype integer and double **/
    int n;
    double d;
    printf("Enter the values integer and double\n");

    /** Taking input from the user and storing in n and d **/

    scanf("%d %lf",&n,&d); 
    printf("The value of integer is %d and the value of double is %f\n",n,d);

    return 0;
}