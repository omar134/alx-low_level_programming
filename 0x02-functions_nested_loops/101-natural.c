[200~#include <stdio.h>

/**
 *  * unitSum - sum of multiples of a
 *   * number less than or equal to N
 *    * @n: number calculated
 *     *
 *      * Return: the sum
 *       */
unsigned int unitSum(unsigned int n)
{
		return ((n * (n + 1)) / 2);
}

/**
 *  * main - sum of multiples of 3 or 5
 *   *
 *    * Return: 0
 *     */
int main(void)
{
		unsigned int limit = 1024;
			unsigned int sum;

				sum = 3 * unitSum((limit - 1) / 3);

					sum += 5 * unitSum((limit - 1) / 5);

						sum -= 15 * unitSum((limit - 1) / 15);

							printf("%u\n", sum);
								return (0);
}

