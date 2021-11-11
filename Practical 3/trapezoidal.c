#include<stdio.h>
#include <math.h> // Library for PI, tan . . etc

float degree_to_radian(float); // Declaring function to convert degree to radian
void main()
{
    float N = 12, a = 0.0, b = 60.0, i; // Initializing value 
    
    float area = tan(a)+tan(degree_to_radian(b)); // Calculating f(X0)+f(Xn)

    for (i = 5; i < 60; i=i+5) // Calculating 2f(X1)+2f(X2)+.....2f(Xn-1) and adding it with previous value of area
    {
        area=area + 2*tan(degree_to_radian(i));
    }

    area = ((degree_to_radian(b-a))/(2*N))*area; // Final multiplication of area with (b-a)/2n

    printf("Calculated area using Trapezoidal rule is %f\n",area); // Printing value calculated using trapezoidal rule
    printf("Value of log(2) is %f\n",log(2)); // Printing value of log(2)
    
}

float degree_to_radian(float degree) // Function to convert degree to radian
{
    return degree*M_PI/180;
}

/* Step to run trapezoidal file
 
 * gcc -o trapezoidal trapezoidal.c -lm
 * ./trapezoidal
 
*/
