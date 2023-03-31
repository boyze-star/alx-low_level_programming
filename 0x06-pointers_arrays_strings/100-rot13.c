#include "main.h"

/**
 * *rot13 -  function that encodes a string using rot13
 * @*: pointer variable
 * Descripton: is a simple letter substitution cipher that replaces a letter
 * with the letter 13 letters after it in the alphabet
 * Return: Always 0.
 */
char *rot13(char *)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);

}
