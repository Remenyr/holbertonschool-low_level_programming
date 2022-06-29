#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Check of the proyect
 * @size: is a variable
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}
}
