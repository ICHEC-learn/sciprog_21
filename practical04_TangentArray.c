#include <stdio.h>
#include <math.h>

double Tangent_Array(double degree_angle);
int main(void)
{
	int number_of_steps, i, j;
	double tangent_array[12], degrees_to_radians[12];
	double start, end, increment, arguement, pi = 3.1415927;

	/* Giving the starting angle, the ending angle and the increment size  */
	start = 0.0;
	end = 60.0;
	increment = 5.0;
	number_of_steps = 12;

	/* Loop for the angles  */
	for(i = 0; i < number_of_steps; i++)
	{
		arguement = ( start + i*increment)*(pi/180.0);
		degrees_to_radians[i] = arguement;
		tangent_array[i] = tan(degrees_to_radians[i]);
	}
	
	/* Printing to the screen */
	for(j = 0; j < number_of_steps; j++)
	{
		printf("The tangent of %.2f radians is %.2f.\n", degrees_to_radians[j], tangent_array[j]);
	}
	return 0;
}	
