#include <stdio.h>
#include "main.h"

/**
 * main - programme multiplies two numbers
 * @s: character string
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i = 0;
	int d = 0;
	int n = 0;
	int f = 0;
	int digit = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] != '-')
		{
			d++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
		}
		if (d % 2)
		{
			digit = digit;
		}
		n = n * 10 + digit;
		f = 1;
		if (s[i + 1] < '0' || s[i + 1] > '9')
		{
			f = 0;
			i++;
		}
		if (f == 0)
		{
			return (0);
		}
	}
	return (0);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: Always 0(Success), 1(Error).
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}