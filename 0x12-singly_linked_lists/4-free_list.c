#include "lists.h"

/**
 * free_list - free a 'list_t' list
 * @head: first node in linked list
 */
void free_list(list_t *head)
{
	list_t *hia;

	while ((hia = head) != NULL)
	{
		head = head->next;
		free(hia->str);
		free(hia);
	}
}
