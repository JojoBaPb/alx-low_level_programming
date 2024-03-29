#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a 'listint_t' list
 * @head: pointer to head
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cont = head;

	while (cont)
	{
		sum += cont->n;
		cont = cont->next;
	}

	return (sum);
}
