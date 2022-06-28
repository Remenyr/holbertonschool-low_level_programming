#include "main.h"
#include <stdio.h>

/**
 * print_line - Check of the proyect
 * @n: is a variable
 * Return: 0
 */

void print_line(int n)
{
	int a;
	for (a = 0; a <= n; a++)
	{
		putchar('_');
	}
	putchar('\n');
}
