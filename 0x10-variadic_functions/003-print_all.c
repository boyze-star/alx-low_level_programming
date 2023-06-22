#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * @format: list of types of arguements
 * @...:variable number of all
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	char *str, c;
	int value, i = 0;
	float f;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			value = va_arg(args, int);
			printf("%d", value);
		}
		else if (format[i] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
