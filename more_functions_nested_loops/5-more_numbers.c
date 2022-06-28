#include "main.h"
#include <stdio.h>

/**
 *more_numbers - Check of the proyect
 *
 *Return: 0
 */

void more_numbers(void)
{
	char i;
	int v;

	for (v = 0; v < 10; v++)
	{
		for (i = '0'; i <= '14'; i++)
			putchar(i);
			putchar('\n');
	}
}
