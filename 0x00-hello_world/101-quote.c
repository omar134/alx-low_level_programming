#include <unistd.h>
/**
 * main - prints a specific msg
 *
 * Return: 1
 */
int main(void)
{
		char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

		write(1, quo, 59);
		return (1);
}
