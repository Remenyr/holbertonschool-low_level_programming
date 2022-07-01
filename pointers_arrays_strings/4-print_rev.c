#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints the rev of the string
 * @s: is the variable
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
