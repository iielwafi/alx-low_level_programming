#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c : The character to print
 * Return : On success 1.
 */
void	ft_putchar(char c)
{
	write (1, &c ,1);
}
int main ()
{
	ft_putchar('c');
	return(0);
}
