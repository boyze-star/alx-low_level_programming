#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr -  function that concatenates all the arguments of your program.
 * @ac: arguement count
 * @av: array of arguements to combine
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int t_len;
	char *result;
	int i, current_index, args_len;

	if (ac == 0|| av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		t_len += strlen(av[i]) + 1;
	}
	result = (char *)malloc((t_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		args_len =  strlen(av[i]);
		strncpy(result + current_index, av[i], args_len);
		current_index += args_len;
		result[current_index] = '\n';
		current_index++;
	}
	result[t_len] = '\0';

	return (result);
}
