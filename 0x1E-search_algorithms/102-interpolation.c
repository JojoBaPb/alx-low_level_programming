#include "search_algos.h"

/**
 * interpolation_search - Searches for value in a sorted array
 * of integers using interpolation search.
 * @array: Pointer to first element of array to search.
 * @size: Number of elements in array.
 * @value: Value being searched for.
 *
 * Return: If value is not present or the array is NULL, -1.
 * Else, first index where value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, x, y;

	if (array == NULL)
		return (-1);

	for (x = 0, y = size - 1; y >= x;)
	{
		i = x + (((double)(y - x) / (array[y] - array[x])) * (value - array[x]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			y = i - 1;
		else
			x = i + 1;
	}

	return (-1);
}
