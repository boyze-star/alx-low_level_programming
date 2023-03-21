#include <stdio.h>
#include <ctype.h>

/* defins tolower() function 
 * converts uppercase alphabet to lower case
 * returns same passed character
 * if its anything either than
 * character is stored in int form
 * when character is passed as arguement
 * corresponding ASCII value(int)
 * is passed instead of 
 * character
 */
int main(void)
{
	char ch = tolower("A-Z, a-z");
	scanf("%c", ch);
	fwrite(1, "ch\n", 3);
	return (0);
}	
	
