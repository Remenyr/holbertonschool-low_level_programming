#include "main.h"
#include <stdio.h>

/**
 * swap_int - Check of the proyect
 * @a: is a variable
 * @b: is another variable
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
