#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %zu bytes\n", (unsigned long)sizeof(char));
	printf("Size of int: %zu bytes\n", (unsigned long)sizeof(int));
	printf("Size of long int: %zu bytes\n", (unsigned long)sizeof(long int));
	printf("Size of long long int: %zu bytes\n", (unsigned long)sizeof(long long int));
	printf("Size of float: %zu bytes\n", (unsigned long)sizeof(float));
	return (0);

}
