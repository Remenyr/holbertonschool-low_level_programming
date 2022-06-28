#include "main.h"
#include <stdio.h>

/**
 * print_line - Check of the proyect
 * @n: is a variable
 * Return: 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
