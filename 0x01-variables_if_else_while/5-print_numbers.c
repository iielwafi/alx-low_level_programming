#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/
int		main(void)
{
	write(1, "0123456789\n", 11);
	return (0);
}
