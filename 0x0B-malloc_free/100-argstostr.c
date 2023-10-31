#include "main.h"

/**
 * argstostr - function that concatenates all the
 * arguments of your program.
 * @ac: arguement count
 * @av: arguement vector
 *
 * Return: Null if ac == 0 or av == Null
 * pointer to new string, Null if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}
	str = malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
