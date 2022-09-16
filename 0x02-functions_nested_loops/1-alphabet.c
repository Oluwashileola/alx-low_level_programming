#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 * followed by a new line
 */

void print_alphabet(void)
{
		char letter;

		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);

		letter++;
		}
		_putchar('\n');
}
