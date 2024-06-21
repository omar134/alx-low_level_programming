#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Determines if a random number is
 * greater than, less than, or equal to zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

