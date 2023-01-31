#include "lists.h"

/**
 * listint_len - returns the number of elements in linked list 'listint_t' list
 * @h: head
 * Return: Number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t nNode1 = 0;

	while (h)
	{
		nNode1++;
		h = h->next;
	}

	return (nNode1);
}
