#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int N;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	N = n % 10;
	if (N > 5)
		printf("Last digit of %d is %d and is greater than 5", n, N);
	else if (N == 0)
		printf("Last digit of %d is %d and is 0", n, N);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, N);

	return (0);

}
