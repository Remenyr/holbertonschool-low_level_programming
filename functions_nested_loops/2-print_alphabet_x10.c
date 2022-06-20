#include "main.h"

/**
 *print_alphabet_x10 - print the alphabet 10 times
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int v;
	char l;

	for (v = 0; v <= 10; v++)
	{
	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	}

}
