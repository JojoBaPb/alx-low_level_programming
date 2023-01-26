#include "lists.h"

/**
 * print_list - prints all the elements of a 'list_t' list.
 * @h: head of linked list
 * Return: nodes requested
 * @hia: here i am
 */
size_t print_list(const list_t *h)
{
	const list_t *hia;
	size_t a;

	a = 0;
	hia = h;
	while (hia != NULL)
	{
		printf("[%d] %s\n", hia->len, hia->str);
		hia = hia->next;
		a++;
	}
	return (a);
}
