#include "main.h"

/**
 * wordcount - get word count from string
 *             without spaces
 *
 * @str: string to count words present
 *
 * Return: The number of words
*/
int wordcount(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		/*skip spaces*/
		if (*str == ' ')
			str++;
		else
		{
			/*count words*/
			while (*str != ' ' && *str != '\0')
				str++;
			words++;
		}
	}
	return (words);
}
