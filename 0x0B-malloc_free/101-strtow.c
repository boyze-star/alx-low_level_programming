#include "main.h"

/**
 * strtow - function that splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings (words)
 * last element should be Null
 * NULL if str == NULL or str == ""
 * Null if function fails
 */
char **strtow(char *str)
{
	int i, s, j, str_l, word;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_l = wordcount(str);
	string = malloc((str_l + 1) * sizeof(char *));
	if (str_l == 0 || string == NULL)
		return (NULL);

	for (i = s = 0; i < str_l; i++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				string[i] = malloc((word - s + 2) * sizeof(char));
				if (string[i] == NULL)
				{
					free_array(string, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= word; s++, j++)
			string[i][j] = str[s];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}
