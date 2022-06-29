#include "main.h"
#include <stdio.h>

/**
 *more_numbers - Check of the proyect
 *
 *Return: 0
 */

void more_numbers(void)
{
	int i;
	int v;

	for (v = 0; v < 10; v++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
