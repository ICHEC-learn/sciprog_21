#include <stdio.h>
#include <math.h>

int main()
{
    int number_of_points = 12, i;
    float initial_degree_angle = 0.0, final_degree_angle = 60.0; 
    float total_degree_angle = final_degree_angle - initial_degree_angle;

    //Converting to radians
    float total_radian_angle;
    total_radian_angle = (M_PI * total_degree_angle)/180.0;
    printf("pi/3 in radians = %f\n", total_radian_angle);

    // f(x0) + f(xN)
    float area = tan(initial_degree_angle) + tan(total_radian_angle);
    printf("The initial Sum is %f\n", area);

    //2*( f(x1) + f(x2) + ... + f(xN-1))
    for(i=5; i<60; i+=5)
    {
        area += 2*tan((M_PI*i)/180.0);
        printf("New area at %d is equal to %f\n",i/5 , area);
    }

    //Multiply with b-a/2N;
    float mult = M_PI*(total_degree_angle/(2*number_of_points))/180.0;
    printf("The value of (b-a)/2N is %f\n", mult);
    area = mult*area;

    //The approximated value for the area
    printf("\nTrapezoidal result for the area = %f\n", area);
    //The actual result is
    printf("The actual result = %f\n", log(2.0));

    return(0);
}

