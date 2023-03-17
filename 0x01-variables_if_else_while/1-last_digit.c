#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/** main - program will assign a random number
 * to the variable n each time it is executed
 */
/*Return: Always zero */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		int rem = n % 10;

		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	if (n % 10 < 6 && n % 10 != 0)
	{
		int rem2 = n % 10;

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem2);
	}
	return (0);
}
