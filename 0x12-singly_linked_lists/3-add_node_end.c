#include "lists.h"

/**
 * _strlen - count the length of s str
 * @str: str to be counted
 *
 * Return: the length of the str
 */
int _strlen(const char *str)
{
	int z;

	z = 0;

	while (str[z] != '\0')
		z++;
	return (z);
}

/**
 * add_node_end - add a node at the end list_t
 * @head: ptr to the head list
 * @str: str to be dup
 *
 * Return: address element new , or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *name, *first;

	name = malloc(sizeof(list_t));
	if (name == NULL)
		return (NULL);
	name->len = _strlen(str);
	name->str = strdup(str);
	name->next = NULL;
	if(*head == NULL)
		*head = name;
	else
	{
		first = *head;
		while (first->next)
			first = first->next;
		first->next = name;
	}
	return (name);
}
