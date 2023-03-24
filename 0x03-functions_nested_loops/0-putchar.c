#include <stdio.h>
#include <unistd.h>

/* main - printing characters
 * Return: Always zero */
int main(void)
{
	/* printing a single string */
	write(1, "_putchar\n", 9);
	return (0);
}
