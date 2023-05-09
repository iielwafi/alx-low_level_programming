#include "main.h"

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
	int a;
	int b;
	int c;

	if (filename == NULL) /*check NULL if filename is fail*/
		return (-1);

	/*create the file with rw------- chmod"600"*/
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (a == -1)
		return (-1);


		if (text_content == NULL)
		{
			close(a);
			return (1);
		}
		for (b = 0; text_content[b]; b++) /*measure length of text_content*/

		c = write(a, text_content, b);
			if (c == -1)
			{
				close(a);
					return (-1);
			}
			return (1);

				close(a);
}
