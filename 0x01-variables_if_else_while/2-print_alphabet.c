#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet in small
 * Return: 0
 */
int main(void)
{
	char alphabet[30] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i <= strlen(alphabet); i++)
		putchar(alphabet[i]);
	putchar("\n")
	return (0);
}
