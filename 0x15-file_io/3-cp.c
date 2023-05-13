#include "main.h"

/**
 * main - program that copie the content of a file to file
 * @argv: is an argruments count
 * @argc: is an arguments to desplay array
 *
 * return: 0
 */

int main(int argc, char *argv[])
{
	int file_from;
	    int file_to;
	int n1 = 1024;
	    int n2 = 0;
	char buf[1024];

	if (argc != 3) /* if argc is not equal to 3*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/*print message on console and exit the program*/
	file_from = open(argv[1], O_RDONLY); /*file_from for reading only*/
	if (file_from == -1) /*check file_from is not open*/
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't write to %s\n", argv[2]);
		exit(99);
		close(file_from); /*Close file_from*/
	}

	while ((n1 = read(file_from, buf, 1024)) > 0) /*loop when read size is 1024*/
	{
		if (n1 == -1) /*check if read size is not 1024*/
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n2 = write(file_to, buf, n1);
		if (n1 > n2)
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to), exit(100);
	return (0);
}
