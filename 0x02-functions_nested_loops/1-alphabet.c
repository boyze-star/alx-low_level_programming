#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(void)
{
	/* main - printing alphabets because I
	 * have insomnia
	 * Return: Always 0.
	 */
        //char ch = 'A';
        char myChars[] = {'A', 'B', 'C', 'D'};

        for (int i = 0; i < 4; i++) 
        {
            char tolowerch = tolower(myChars[i]);
            write(1, &tolowerch, 1);

	}
        return (0);
}
