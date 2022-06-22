#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check of the proyect
 *@c: is a variable
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
