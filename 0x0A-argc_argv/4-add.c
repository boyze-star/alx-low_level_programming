#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks for digits in string
 * @str: string to be cheched
 *
 * Return: Always (0 Success, 1 Error)
 */
int check_num(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc:arguements count
 * @argv: arguements vector
 *
 * Reurn: Always (0 Success, 1 Error)
 */
int main(int argc, char *argv[])
{
	int j = 1, sti, sum = 0;

	while (j < argc)
	{
		if (check_num(argv[j]))
		{
			sti = atoi(argv[j]);
			sum += sti;
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		j++;
		printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return (0);
}
