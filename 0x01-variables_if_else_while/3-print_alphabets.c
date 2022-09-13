#include <stdio.h>

/**
 * Prints the alphabets in lowercase, and then in uppercase letters.
 *
 * Return is always 0.
 */

int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);

		for (letter = 'A'; letter <= 'Z'; letter++)
			putchar(letter);
		
		putchar('\n');

		return (0);
}
