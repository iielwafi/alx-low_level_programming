#include "main.h"

/**
 * get_bit - a func that retutns the value of bit
 * @n: number
 * @index: index of the bit
 *
 * return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int c;

	if (c > 63)
	return (-1);

	c = (n >> index) & 1;
	return (c);
}
