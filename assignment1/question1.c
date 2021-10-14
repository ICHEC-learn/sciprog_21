#include<stdio.h>
int Collatz_Function(int number);

int main()
{
	int number = 50;
	int counter = 0;
	while(number > 1)
	{
		counter += 4;
		printf("%d, ",number);
		number = Collatz_Function(number);
		if(counter == 40)
		{
			counter = 0;
			printf("\n");
		}
	}
	printf("%d", 1);
	printf("\n");
	return(0);
}



// Creating the function in the assignment
int Collatz_Function(int number)
{	
	if(number == 1)
	{
		number = 1;
	}
	else if(number % 2 == 0)
	{
		number = number/2;
	}
	else
	{
		number = 3*number + 1;
	}
	return( number );
}
