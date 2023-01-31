#include "lists.h"

/**
 * print_listint - prints all elements of 'listint_t' list
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nNode = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nNode++;
		h = h->next;
	}

	return (nNode);
}
