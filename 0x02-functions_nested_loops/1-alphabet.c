#include "main.h"

	/*
	 * print all alphabet in lower case
	 */
	void print_alphabet(void)
	{
		/*
		 *  function that prints the alphabet, 
		 *  in lowercase, followed by a new line.
		 */
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
