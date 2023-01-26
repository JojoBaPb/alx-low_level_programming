#include "lists.h"

/**
 * list_len - returns the number of elements in 'list_t' list
 * @h: head of linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t hia;

	hia = 0;
	while (h != NULL)
	{
		h = h->next;
		hia++;
	}

	return (hia);
}
