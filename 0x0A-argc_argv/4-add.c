#include <stdio.h>
/**
 * add_positive - program that adds positive numbers
 * @a: integer var
 * @b: integer var
 *
 * Return: Always 0(Success), 1(Error)
 */
int add_positive(int a, int b)
{
	if (a < 0 || b < 0)
	{
		return (1);
	}
	else
	{
		return (a + b);
	}
}
/**main - checkcode
 * @num1: var one
 * @num2: var two
 *
 * Return: Always 0(Success), 1(Error)
 */
int main()
{
	int num1, num2, result;

	scanf("%d %d", &num2, &num1);
	
	result = add_positive(num1, num2);
	
	printf(" %d\n",result);
	
	return (0);
}
