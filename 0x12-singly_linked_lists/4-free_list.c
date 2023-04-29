#include "lists.h"

/**
 * free_list - free a list_t
 * @head: ptr to head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
