#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to search
 * @size: array size
 * @cmp: pointer
 * Return: index of first element == 'cmp'
 * -1 if nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}

	return (-1)
}
