#include <stdio.h>

/**
 * unitSum - sum of multiples of a
 * number less than or equal to N
 * @n: number calculated
 *
 * Return: the sum
 */
unsigned int unitSum(unsigned int n)
{
	return ((n * (n + 1)) / 2);
}

/**
 * main - sum of multiples of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
	unsigned int limit = 1024;
	unsigned int sum = 0;

	for (unsigned int i = 3; i < limit; i += 3)
	{
		sum += i;
	}

	for (unsigned int i = 5; i < limit; i += 5)
	{
		sum += i;
	}

	for (unsigned int i = 15; i < limit; i += 15)
	{
		sum -= i;
	}
	printf("%u\n", sum);
	return (0);
}

