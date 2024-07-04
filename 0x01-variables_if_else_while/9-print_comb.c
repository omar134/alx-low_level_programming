#include <stdio.h>

/**
 * main - prints combinations of single-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('$');
	}
	return (0);
}

