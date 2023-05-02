#include "lists.h"

/**
 * listint_len - fuction that return the digit of elements.
 * 
 * @h: is a ptr to first node.
 * Return: digit of elements
 *
*/
size_t listint_len(const listint_t *h)
{
	size_t n;

	n 0;

	while (h != NULL)
	{
		if(h != '\0')
		n++;

		h = h->next;
	}

	return (n);
} 