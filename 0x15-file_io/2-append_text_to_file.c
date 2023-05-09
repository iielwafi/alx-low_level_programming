#include "main.h"

/**
 * append_text_to_file - a function append text in a file
 * Prototype:int append_text_to_file(const char *filename, char *text_content)
 * @filename: name of file
 * @text_content: Return NULL ...
 *
 * Return: -1 on fail or 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q = 0;
	int a = 0;
	int s = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (s = 0; text_content[s];)
			s++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
		a = write(q, text_content, s);

	if (q == -1 || a == -1)
	return (-1);

	close(q);

	return (1);
}
