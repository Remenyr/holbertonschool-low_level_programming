#include "main.h"

/**
 *_strlen - length of a string
 *@str: text string
 *Return: len
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * puts_half - prints a half of a string
 * @str: text string
 * Return: 0
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int middle = len % 2;
	int even = len / 2;
	int odd = even + 1;

	while (str[even] != '\0' && str[odd] != '\0')
	{

		if (middle == 0)
		{
			_putchar(str[even]);
			even++;
		}

		if (middle != 0)
		{
			_putchar(str[odd]);
			odd++;
		}

	}
	_putchar('\n');
}
