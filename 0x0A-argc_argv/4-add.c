#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num - program that adds positive numbers
 * @str: string array
 *
 * Return: Always 0.
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (0);
}
/**
 * main - print the added digits
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
