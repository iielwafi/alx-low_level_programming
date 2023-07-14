#include "main.h"

/**
 * clear_bit - a func that sets the value a bit to 0
 * @n: ptr to num
 * @index: index of the bit
 *
 * return : 1 if correct or -1 if NULL
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)

	return (-1);

		*n &= ~(1 << index);
	return (1);
}
