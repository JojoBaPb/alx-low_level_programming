#include "search_algos.h"

/**
 * binary_search - Searches for value in sorted array
 * of integers using binary search.
 * @array: Pointer to first element of array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, lft, rght;

	if (array == NULL)
		return (-1);

	for (lft = 0, rght = size - 1; rght >= lft;)
	{
		printf("Searching in array: ");
		for (i = lft; i < rght; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lft + (rght - lft) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rght = i - 1;
		else
			lft = i + 1;
	}

	return (-1);
}
