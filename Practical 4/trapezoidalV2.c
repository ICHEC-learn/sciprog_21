#include<stdio.h> //library for standard input and output
#include<math.h>  //library for math functions

float degree_to_radian(float); //declaring function to convert degree to radian values

void main()
{
    int N = 12, i ; //declaration and initialization of int variables
    float TanArr[N], deg, area ; //declaration of float variables

    for (i = 0; i <= N; i++) //loop to calculate tan values from 1 to 12
    {
        deg = i*5.0;
        TanArr[i]=tan(degree_to_radian(deg));
        printf("value of TanArr[%d] = %f\n",i,TanArr[i]);
    }

    area = TanArr[0]+TanArr[N]; //area of f(X0)+f(Xn)

    for (i = 1; i < N; i++) //area of 2f(X1)+2f(X2)+........+2f(Xn-1)
    {
        area = area + 2*(TanArr[i]);
    }

    area = degree_to_radian((60.0-0.0)/(2*N))*area; //final multiplication of area with (b-a)/2N

    printf("Calculated area using trapezoidal rule is %f\n",area); //printing area calculated using trapezoidal rule
    printf("Value of log(2) is %f\n",log(2)); //printing value of log(2)
    
}

float degree_to_radian(float degree) //function that return radian for the given degree
{
    return (degree*M_PI)/180;
}
