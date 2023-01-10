#include <stdio.h>

/**
 * linear_search - function that searches for a value in an array
 * @value: is the value to search for
 * @size: is the number of elements in the array
 * @array: pointer to the first element of the array
 * Return: index value or -1 on failure.
 */

int linear_search(int *array, size_t size, int value) 
{
	if (array == NULL) 
	{
		return -1;
	}

	for (size_t i = 0; i < size; i++)
	{
		printf("Comparing array[%ld] = %d to value = %d\n", i, array[i], value);
		if (array[i] == value)
		{
			return i;
		}
	}

	return -1;
}

