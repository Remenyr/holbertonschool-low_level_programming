#include "main.h"

/**
 * _strlen - Check of the proyect
 *@s: is a variable
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
