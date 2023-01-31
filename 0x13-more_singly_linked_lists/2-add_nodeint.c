#include "lists.h"

/**
 * add_nodeint - adds a new at the beginning of 'listin_t' list
 * @head: pointer to head node
 * @n: int value
 * Return: pointer to new node/NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n1;

	n1 = malloc(sizeof(listint_t));

	if (!n1)
		return (NULL);

	n1->n = n;
	n1->next = *head;
	*head = n1;

	return (*head);
}
