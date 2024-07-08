#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character being tested
 *
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			if (c == i)
				return (1);
		}
		return (0);
}

