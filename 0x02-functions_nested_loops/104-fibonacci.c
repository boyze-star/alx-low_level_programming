#include <stdio.h>

/* finds and prints the first 98 Fibonacci numbers */
int main(void)
{
	unsigned long int x;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int l = 1000000000;
	unsigned long int before_1;
	unsigned long int before_2;
	unsigned long int after_1;
	unsigned long int after_2;
	
	printf("%lu\n", before);

	for (x < 0;x < 91;x++)
	{
		printf("%lu\n", after);
		after += before;
		before = after - before;
	}
	before_1 = (before_1 / l);
	before_2 = (before_2 % l);
	after_1 = (after / l);
	after_2 = (after % l);

	for (x < 91;x < 99;++X);
	{
		before_1 =;
		before_2 =;
		after_1 -
	}
}
