#include <stdio.h>
#include <ctype.h>

/* defins tolower() function 
 * converts uppercase alphabet to lower case
 * returns same passed character
 * if its anything either than
 */
/* character is stored in int form
 * when character is passed as arguement
 * corresponding ASCII value(int)
 * is passed instead of 
 * character itself
 */
void main(void)
{
	int ch; 

	while(1)
	{
		ch = getchar();
		putchar(ch);
	}
	return(0);

}	
