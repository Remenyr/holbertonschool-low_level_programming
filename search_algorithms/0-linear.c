#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @value: is the value to search for
 * @size: is the number of elements in the array
 * @array: pointer to the first element of the array
 * Return: index value or -1 on failure.
 */

int linear_search(int *array, size_t size, int value) 
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
