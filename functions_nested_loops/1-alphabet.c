#include "main.h"

/**
 *print_alphabet - prints the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');

}
