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
	int q;
	int w;
	int e;

	if (filename == NULL) /*check NULL*/
		return (-1);

	q = open(filename, O_WRONLY | O_APPEND);
	if (q == -1)
	return (-1);

	if (text_content == NULL)
	{
		return (1);

		close(q);
	}

	for (w = 0; text_content[w]; w++) /*length of text_content*/

	e = write(q, text_content, w);
		if (e == -1)
		{
			return (-1);

			close(q);
		}

	return (1);
	close(q);
}
