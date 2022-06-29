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
	int a = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					putchar(' ');
				else
					putchar('#');
			}
			n--;
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
