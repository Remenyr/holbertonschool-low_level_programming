#include "main.h"
#include <stdio.h>

/**
 * _puts - check of the proyect
 * @s: is a variable
 * Return: 0
 */

void _puts(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
	putchar(s[i]);
	i++;
	}
	putchar('\n');
}
