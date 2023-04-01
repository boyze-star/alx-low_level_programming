#include "main.h"

/**
 * *rot13 -  function that encodes a string using rot13
 * @n: pointer variable
 * Descripton: is a simple letter substitution cipher that replaces a letter
 * with the letter 13 letters after it in the alphabet
 * Return: Always 0.
 */
char *rot13(char *n)
{
	int i;
	int j;
	char alpstr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotstr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == alpstr[j])
			{
				n[i] = rotstr[j];
			}
		}
	}
	return (n);
}
