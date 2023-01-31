#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a 'listint_t' list
 * @head: pointer to head
 * @n: int value pf new node
 * Return: new node/NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hia;
	listint_t *n1;

	hia = *head;
	while (hia && hia->next != NULL)
		hia = hia->next;

	n1 = malloc(sizeof(listint_t));
	if (n1 == NULL)
		return (NULL);
	n1->n = n;
	n1->next = NULL;

	if (hia)
		hia->next = n1;
	else
		*head = n1;
	return (n1);
}

