#include "main.h"
/**
 * read_textfile - text file ready to read
 * @filename: is a file name
 * @letters: num of lestters ready to print in stdout
 *
 * Return: number of lestter ready to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ft_read, ft_car, ft_o;
	char *buff;

	if (filename == NULL)
		return (0);
	ft_o = open(filename, O_RDONLY);
		if (ft_o == -1)
			return (0);
		buff = malloc(sizeof(char) * letters);
			if (buff == NULL)
				return (0);
			ft_read = read(ft_o, buff, letters);
				if (ft_read == -1)
			{
				free(buff);
					return (0);
			}
				ft_car = write(STDOUT_FILENO, buff, ft_read);
					if (ft_car == -1)
					{
						free(buff);
							return (0);
					}
			close(ft_o);
			free(buff);
			return (ft_car);
}
