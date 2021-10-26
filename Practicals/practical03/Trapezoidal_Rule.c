#include <stdio.h>
#include <math.h>

int main()
{
	int number_of_steps, i;
	double start_point, end_point, step_size, arg, series, integral, difference;
	double tan( double arg);
	
	/* input the start point, the end point and the number of steps */
	start_point = 0.0;
	end_point   = 22.0/21.0;
	number_of_steps = 12;
	/* The trapezoidal method: */

	step_size = fabs(end_point - start_point)/number_of_steps;
	series = 0.0;
	for(i = 1; i < number_of_steps ; ++i)
	{
		arg = start_point + i*step_size;
		series += tan(arg);
	}
	integral = (step_size/2)*(tan(start_point) + 2*series + tan(end_point));
	difference = log(2)-integral;
	/* print the result */

	printf("Using the trapezoidal method, the result of the integral is: %.21f\n", integral);
	printf("The difference from Ln(2) is: %.21f\n", difference);
	return 0;
}


