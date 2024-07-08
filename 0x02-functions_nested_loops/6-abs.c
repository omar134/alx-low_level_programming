#include "main.h"

/**
 * _abs - prints the absoulute value
 * @n: number being tested
 *
 * Return: -
 */
int _abs(int n)
{
	if (n < 0)
		_putchar((n * (-1)));
	else
		_putchar(n);
}

