#include "lists.h"

/**
 * sum_dlistint - get the sum of all n of a dlistint_t
 * @head: head of doubly LL
 * Return: sum of all n or 0 if LL is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	temp = head;
	for (sum = 0; temp; temp = temp->next)
		sum += temp->n;

	return (sum);
}
