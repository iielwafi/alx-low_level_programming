#include <unistd.h>

/**
 * _putchar - write a char c to display c
 *@c: char to print
 *
 *return : success 1 on error
 */
int _putchar(char c)
{
	write (1, &c, 1);
	return(0);
}

