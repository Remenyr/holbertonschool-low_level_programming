#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x % 10 + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
