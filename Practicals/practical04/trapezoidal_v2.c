#include <stdio.h>
#include <math.h>

float degrees_to_radians(float degree_angle);
int main(){
    int N = 12, i;
    float Tangent_array[N+1], degree, radian;

    for(i = 0; i <= N; i++)
    {
        degree = i*(5.0);
        radian = degrees_to_radians(degree);
        Tangent_array[i] = tan(radian);
        printf("Tangent_array[%d] = %f (f(x) at x = %d)\n", i, Tangent_array[i], i*5);
    }

    // Finding the area by the trapezoidal method
    float area;
    area = Tangent_array[0]+Tangent_array[12];
    for(i = 1; i<N; i++)
    {
        area += 2.0*Tangent_array[i];
    }

    // Multiply by b-a/2N
    float mult = degrees_to_radians(60.0)/(2.0*N);
    area = mult*area;

    printf("The approximated result is %f\n", area);
    printf("The actual result is %f\n", log(2.0));
    return(0);
}

float degrees_to_radians(float degree_angle){
    return((M_PI/180.0)*degree_angle);
}