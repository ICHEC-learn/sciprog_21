#include <stdio.h>

int main(void)
{
    // Declaring two integers and giving them values
    int integer_1 =10, integer_2 = 200;

    // Declaring two floats and giving them values
    float float_1 = 1.11, float_2 = 2.2222;

    //Print the values to the screen. 
    // We give the floats to four decimal places.
    printf("The two integers are %d and %d\n", integer_1, integer_2);
    printf("The two floating point numbers are %.4f and %.4f\n", float_1, float_2);
    return(0);
}