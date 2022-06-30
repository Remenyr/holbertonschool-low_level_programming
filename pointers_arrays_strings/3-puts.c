#include "main.h"
#include <stdio.h>

/**
 * _puts - check of the proyect
 * @str: is a variable
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
}
