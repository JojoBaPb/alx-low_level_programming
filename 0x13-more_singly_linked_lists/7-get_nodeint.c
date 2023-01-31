#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of 'listint_t' list
 * @head: pointer to head
 * @index: index of return node
 * Return: pointer to node or NULL if failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *cont = head;

	while (cont && i < index)
	{
		cont = cont->next;
		i++;
	}
	return (cont ? cont : NULL);
}
