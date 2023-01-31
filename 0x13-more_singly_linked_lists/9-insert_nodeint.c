#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head
 * @idx: Index of list where node will be added
 * @n: int value in node
 * Return: Adress of new node/NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n1, *cont = *head;
	size_t x = 0;

	n1 - malloc(sizeof(listint_t));
	if (!n1)
		return (NULL);

	n1->n = n;
	n1->next = NULL;

	if (!*head && idx)
	{
		*head = n1;
		return (n1);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		n1->next = cont;
		*head = n1;
		return (n1);
	}

	while (x < (idx - 1))
	{
		cont = cont->next;
		x++;
	}
	n1->next = cont->next;
	cont->next = n1;

	return (n1);
}
