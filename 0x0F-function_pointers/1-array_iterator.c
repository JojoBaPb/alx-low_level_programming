#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a fn given as para on each element of array
 * @array: array used
 * @size: size of array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
