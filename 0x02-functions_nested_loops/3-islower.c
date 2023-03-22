#include "main.h"

/*lowercase chars
 *@c: check lowercase chars
 *Return 1 if char is c
 *and 0 if anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
