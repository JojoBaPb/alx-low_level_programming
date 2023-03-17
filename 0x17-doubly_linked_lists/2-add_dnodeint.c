#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of dlistint_t list
 * @head: double pointer head node
 * @n: value to store in node
 * Return: address of new node, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	newN = malloc(sizeof(dlistint_t));
	if (newN == NULL)
		return (NULL);

	newN->n = n;
	newN->prev = NULL;
	if (tmp == NULL)
		newN->next = NULL;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;

		tmp->prev = newN;
		newN->next = tmp;
	}
	*head = newN;

	return (*head);
}
