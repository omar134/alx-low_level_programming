#include <stdio.h>

/**
 * main - prints single numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}

