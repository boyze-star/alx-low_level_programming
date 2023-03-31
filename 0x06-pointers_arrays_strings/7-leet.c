#include "main.h"

/**
 * *leet - function that encodes a string into numbers
 * @n: variable
 * Description: *leet
 * Return: Always 0.
 */
char *leet(char *n)
{
	char alparr[] = "AaEeOoLlTt";
	char numarr[] = "4433001177";
	int i;
	int j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == alparr[j])
			{
				n[i] = numarr[j];
			}
		}
	}
	return (n);
}
