#include "lists.h"

/**
 * _strlen - count the length of a string
 * @str: str to be counted
 *
 * Return: the length of string
 */
int _strlen(const char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}

/**
 * add_node - add a node to the beginning of a list_t
 * @head: ptr to the head of the list
 * @str: string used as content
 * Return: new address of the node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *name;

	name = malloc(sizeof(list_t));
	if (name != NULL)
	{
		name->next = *head;
		name->str = strdup(str);
		name->len = _strlen(str);
	}
	else
		return (NULL);
	if (*head != NULL)
		name->next = *head;
	*head = name;
	return (name);
}
