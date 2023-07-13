#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a value in a sorted
 * array of integers with binary search.
 * @array: Pointer to first element of the [sub]array being searched.
 * @left: Starting index of the [sub]array to search.
 * @right: Ending index of the [sub]array to search.
 * @value: Value to search for.
 *
 * Return: If value is not present, -1.
 * Else, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = left + (right - left) / 2;
	if (array[x] == value && (x == left || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_binary_recursive(array, left, x, value));
	return (advanced_binary_recursive(array, x + 1, right, value));
}

/**
 * advanced_binary - Searches for value in a sorted array
 * of ints using advanced binary search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in array.
 * @value: Value being searched for.
 *
 * Return: If value is not present or the array is NULL, -1.
 * Elsee, the first index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
