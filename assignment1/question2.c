#include<stdio.h>
#include<math.h>

float Series(float coefficient, float variable, int power);
float Formula(float coefficient, float variable, int power);


int main()
{
    int i, power;
    float coefficient, variable, series, formula, difference;

    for(i=1; i<=3; i++) // For loop that loops through each case
    {
        switch(i) // Switch case for the three different values of n, a, r.
        {
            case 1:
                coefficient = 2.0; 
                variable = 0.01; 
                power = 10000;
                break;
            case 2:
                coefficient = 0.01; 
                variable = 1.1; 
                power = 500;
                break;
            case 3:
                coefficient = 0.0001; 
                variable = 2.0; 
                power = 100;
                break;
        }
        series = Series(coefficient, variable, power);
        formula = Formula(coefficient, variable, power);
        difference = (series - formula);
        printf("Series =  %f.\n", series);
        printf("Formula = %f.\n", formula);
        printf("Difference =  %f.\n", difference); 
        printf("\n");
    }
    
}
// For case 1 the difference is zero, for cases 2 & 3 the difference is nonzero.
// I imagine that this is because in case 1 the variable x is less than one so it converges to a value.
// In cases 2 & 3 x is greater than one so these series diverge, so we get a rather large number at the end.
// The difference in value must be caused by the type of arithmetic that is happening in definitions of the series and formula.



// Function that generates the series of a*r^n
float Series(float coefficient, float variable, int power)
{
        int i = 0;
        float sum = 0;
        for(i = 0; i < power+1; i++)
        {
                sum += coefficient*pow(variable, i);
        }
        return(sum);
}

// Function that generates the formula
float Formula(float coefficient, float variable, int power)
{
    float value = coefficient*(1 - pow(variable, power + 1))/(1 - variable);
    return(value);
}
