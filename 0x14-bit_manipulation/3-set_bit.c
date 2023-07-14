#include "main.h"

/**
 * set_bit - a func that sets the value of bit to 1
 * @n: ptr to the num
 * @index: index of the bit
 *
 * return: 1 if true or -1 if NULL
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)

		return (-1);

	*n |= 1 << index;

		return (1);
}
