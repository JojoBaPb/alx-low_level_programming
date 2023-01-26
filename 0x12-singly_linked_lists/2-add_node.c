#include "lists.h"

/**
 * add_node - add a new node at the beginning of 'list_t' list
 * @head: start of linked list
 * @str: string to be saved in new node
 * Return: Adress of new element, NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n1;
	size_t a = 0;

	n1 = malloc(sizeof(list_t));
	if (n1 == NULL)
		return (NULL);

	while (str[a])
		a++;

	n1->str = strdup(str);
	n1->len = a;
	n1->next = *head;
	*head = n1;

	return (*head);
}
