#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of dlistint_t
 * @head: pointer to head
 * @index: node index to return
 * Return: node at index given or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int c;

	temp = head;
	for (c = 0; tmp && c < index; temp = temp->next, c++)
		;

	return (temp);
}
