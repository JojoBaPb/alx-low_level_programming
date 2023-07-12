#include "search_algos.h"

/**
 * jump_search - Searches for value in a sorted array
 * of integers with jump search.
 * @array: Pointer to first element of array to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 * Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jmp, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		i = jmp;
		jmp += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; i < jmp && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
