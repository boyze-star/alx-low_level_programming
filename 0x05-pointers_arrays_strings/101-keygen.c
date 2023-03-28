#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generates passwords
 * passwords for 101-crack_me
 *
 * Return: Always (Success)
 */
int main(void)
{
	int pass[100];
	int sum, n;
	int i;

	srand(time(NULL));

	i  = 0;

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
