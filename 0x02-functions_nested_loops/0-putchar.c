#include <stdio.h>
#include <unistd.h>

int main(void)
{
	/* using 'write' to print 
	 * open file as '.c' extension
	 */
	/* execute main() function
	 * write() is a system call
	 * takes three  arguements as file descriptor
	 * first constant string
	 * second size of constant string
	 * including '\O'
	 */
	/* compile as cc file_name
	 * execute as ./a.out
	 * include <unistd.h>
	 */
	write(1, "_putchar\n", 9);
	return(0);
}
