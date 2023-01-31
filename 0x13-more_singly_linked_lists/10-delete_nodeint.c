#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index 'index' of a 'listint_t'
 * @head: pointer to head
 * @index: index of node to be deleted
 * Return: 1 if success and -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cont = *head;
	listint_t *hia = NULL;
	size_t x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cont);
		return (1);
	}

	while (x < index - 1)
	{
		if (!cont || !(cont->next))
			return (-1);

		cont = cont->next;
		x++;
	}

	hia = cont->next;
	cont->next = hia->next;
	free(hia);

	return (1);
}
