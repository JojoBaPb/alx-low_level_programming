#include "lists.h"

/**
 * pop_listint - deletes the head node of a 'listint_t' linked list
 * @head: pointer to head
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	int n1;
	listint_t *cont;

	if (*head == NULL)
		return (0);

	cont = *head;
	n1 = cont->n;
	*head = cont->next;
	free(cont);

	return (n1);
}
