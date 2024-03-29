#include "lists.h"

/**
 * free_listint2 - frees a  'listint_t' list
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *cont;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		cont = *head;
		*head = (*head)->next;
		free(cont);
	}
}
