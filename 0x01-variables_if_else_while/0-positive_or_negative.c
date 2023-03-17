#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* print whether the number is negative or positive */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* ask user to enter number */
	
	printf("Enter a number: \n");
	/* prompt user for number */
	
	scanf("%d", n);
		printf("User entered %d as input\n", n);
	
	/* print type of number entered by user */	
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else 
	{
		printf("%d is zero\n", n);
	}	
	return (0);
}
