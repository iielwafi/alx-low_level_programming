#include "main.h"
#include <stddef.h>

/**
 * _strlen - string length
 * @str: str usd
 *
 * Return: str of length
 */
int _strlen(char *str)
{
	int v = 0;

	while (str[v] != '\0')
		v++;
	return (v);
}

/**
 * create_file - a function that append text
 * Prototype:int append_text_to_file(const char *filename, char *text_content)
 * @filename: name of the file
 * @text_content: NULL
 *
 * Return: if det success 1 or -1 if get fail
 */
int create_file(const char *filename, char *text_content)
{
	int a = 0;
	int b = 0;
	int c = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
	for (c = 0; text_content[c];)
		c++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	b = write(a, text_content, c);

	if (a == -1 || b == -1)
	return (-1);

	close(a);
	return (1);
}
