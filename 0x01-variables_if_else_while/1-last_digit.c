#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - rogram will assign a random number to the variable n each time it is executed */
/*Return: Always */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d  is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
