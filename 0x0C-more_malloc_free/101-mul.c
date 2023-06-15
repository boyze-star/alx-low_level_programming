#include "main.h"
#include <ctype.h>

/**
 * is_valid_number - checks if num is valid
 * @number: num to be checked
 *
 * Return: Always 0
 */
int is_valid_number(const char *number)
{
	while (*number)
	{
		if (!isdigit(*number))
		{
			return (0);
		}
		number++;
	}
	return (1);
}
/**
 * multiply_numbers - function multiplys numbers
 * @num1: first num
 * @num2: second num
 *
 * Return: Always 0
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}
