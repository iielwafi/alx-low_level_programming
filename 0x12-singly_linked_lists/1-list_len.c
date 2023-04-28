#include "lists.h"

/**
 * list_len - counts the number of elements in linked list_t list
 * @h: pointer to the head of the list
 *
 * Return:the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number;

	number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}

	return (number);
}
