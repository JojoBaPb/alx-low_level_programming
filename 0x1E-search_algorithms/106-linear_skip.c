#include "search_algos.h"

/**
 * linear_skip - Searches for algorithm in a sorted singly
 * linked list of ints using linear skip.
 * @list: Pointer to head of linked list to search.
 * @value: Value being searched for.
 *
 * Return: If value is not present or head of list is NULL, NULL.
 * Else, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 * Uses square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
