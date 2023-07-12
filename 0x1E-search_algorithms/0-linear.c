#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * of integers using linear search.
 * @array: Pointer to first element of array to search.
 * @size: Number of elements in array.
 * @value: Value to being searched for.
 *
 * Return: If value is not present or array is NULL, -1.
 * Else, first index where the value is located.
 *
 * Description: Prints value every time it is compared in array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
