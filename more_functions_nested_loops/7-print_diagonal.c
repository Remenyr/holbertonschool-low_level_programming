#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Check of the proyect
 * @n: is a variable
 * Return: 0
 */

void print_diagonal(int n)
{
	int cant;
	int vec;

	for (cant = 1; cant <= n; cant++)
	{
		for (vec = 1; vec < cant; vec++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
	if (n < 1)
		putchar('\n');
}
