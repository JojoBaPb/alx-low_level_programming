#include "lists.h"

/**
 * add_node_end - add a new node at the end of 'list_t' list
 * @head: start of linked list
 * @str: string to put in list
 * Return: address of nre element, NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n1, *o1;
	size_t newchar = 0;

	n1 = malloc(sizeof(list_t));

	if (n1 == NULL)
		return (NULL);

	n1->str = strdup(str);

	while (str[newchar])
		newchar++;

	n1->len = newchar;
	n1->next = NULL;
	o1 = *head;

	if (o1 == NULL)
		*head = n1;

	else
	{
		while (o1->next != NULL)
		o1 = o1->next;
		o1->next = n1;
	}

	return (*head);
}
