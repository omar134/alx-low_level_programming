#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
		char i;
		int b;

		for (b = 0; b < 10; b++)
		{
			for (i = 'a'; i <= 'z'; i++)
				_putchar(i);
		_printchar('\n');
		}
}

