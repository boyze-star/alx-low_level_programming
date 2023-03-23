#include "main.h"

/**
 * _isupper - checks uppercase chars
 * c - var
 * return: always 0
 */
int _isupper(int c)
{
	/**
	 * using ascii values in place chars
	 */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
