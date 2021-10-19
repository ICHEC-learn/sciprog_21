#include<stdio.h>
#include<math.h>

float Series(float coefficient, float variable, int power);


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

