#include "main.h"
#include <stdio.h>

/**
 * print_square - Check of the proyect
 * @size: is a variable
 * Return: 0
 */

void print_square(int size)
{
	int cant;
	int vec;

	for (cant = 0; cant < size; cant++)
	{
	for (vec = 0; vec < size; vec++)
	{
		putchar('#');
	}
		putchar('\n');
	}
	if (size < 1)
	putchar('\n');
}
