#include<stdio.h>

void main ()
{
    int i;
    double d;
    printf("Please enter an integer and double values separated by space\n");
    scanf("%d %lf",&i,&d); //accept user input and place the value given before space in i and after space in d respectively
    printf("Value of integer is %d \nValue of double is %f\n",i,d);

    int *pointer_to_i = &i;
    printf("value of i is %d\n",i);
    printf("value of *pointer_to_i is %d\n",*pointer_to_i);
    printf("address of i is %d\n",&i);
    printf("address of pointer_to_i is %d\n",pointer_to_i);
}