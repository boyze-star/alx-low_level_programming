#include <unistd.h>

/* main - writes to stdout
 * Return: Always zero */
int _putchar(char c)
{
	return(write(1, &c, 1));
}	
