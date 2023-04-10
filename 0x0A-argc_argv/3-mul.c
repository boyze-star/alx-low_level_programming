#include <stdio.h>
#include <stdlib.h>

/**
 * mul_num - program that multiplies two numbers.
 * @a: integer arg
 * @b: integer arg
 *
 * Return: Void
 */
void mul_num(int a, int b)
{
	printf("%d\n", a * b);
}
/**
 * main - checkcode
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: Always 0(Success), 1(Error)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	mul_num(arg1, arg2);

	return (0);
}
