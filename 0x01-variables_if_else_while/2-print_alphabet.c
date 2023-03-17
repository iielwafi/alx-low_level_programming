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
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	return (0);
}
