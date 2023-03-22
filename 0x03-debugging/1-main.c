#include <stdio.h>

/* causing the output to go into an infinite loop */
int main(void)
{
	int x;
	printf("infinite loop incoming\n");
	x = 0;
	while (x < 10)
	{
	putchar(x);
	printf("infinite loop avoided! \\o/\n");
	return (0);
	}
}
