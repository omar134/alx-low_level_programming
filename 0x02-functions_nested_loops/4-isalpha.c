#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character being tested
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * or 0 if not
 */
int _isalpha(int c)
{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			if (c == i)
				return (1);
		}
		for (i = 'A'; i <= 'Z'; i++)
		{
			if (c == i)
				return (1);
		}
		return (0);
}

