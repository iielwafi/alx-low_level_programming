#include "main.h"

/**
 * read_textfile - is a function read atext file end print "PSIX"
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 * @filename: number of letter to print
 * @letters: number of letter to read
 *
 * Return: number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int o;
	int x;
	char *user;

	user = malloc(sizeof(*user) * letters);

	if (user == NULL || filename == NULL)

		return (0);

	f = open(filename, O_RDONLY);
		if (f == -1)
		{
			return (0);
			free(user);
		}
	o = read(f, user, letters);
		if (o == -1)
		{
			close(f);
			return (0);
			free(user);
		}
	x = write(STDOUT_FILENO, user, o);
		if (x != o)
			return (0);
		close(f);
		free(user);
		return (o);
}
