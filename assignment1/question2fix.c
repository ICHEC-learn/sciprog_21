#include<stdio.h>
#include<math.h>

float Series(float coefficient, float variable, int power);
float Formula(float coefficient, float variable, int power);


int main()
{
    int i, power;
    float coefficient, variable, series, formula, difference;
    for(i = 1; i = 3; i++) // Loop the runs from 1 to 3
    {
        switch(i) // Switch case for the three different values of n, a, r.
        {
            case 1:
                coefficient = 2.0; 
                variable = 0.01; 
                power = 10000;
            case 2:
                coefficient = 0.01; 
                variable = 1.1; 
                power = 500;
            case 3:
                coefficient = 0.0001; 
                variable = 2.0; 
                power = 100;
        }
    series = Series(coefficient, variable, power);
    formula = Formula(coefficient, variable, power);
    difference = fabs(series - formula);
    printf("The series value is %f.\n", series);
    printf("The formula value is %f.\n", formula);
    printf("The difference between the two results is %f.\n", difference);
    }
}


// Function that generates the series of a*r^n
float Series(float coefficient, float variable, int power)
{
        int i = 0;
        float sum = 0;
        while(i <= power)
        {
                sum += coefficient*pow(variable, i);
                i += 1;
        }
        return(sum);
}

// Function that generates the formula
float Formula(float coefficient, float variable, int power)
{
    float value = coefficient*(1 - pow(variable, power + 1))/(1 - variable);
    return(value);
}