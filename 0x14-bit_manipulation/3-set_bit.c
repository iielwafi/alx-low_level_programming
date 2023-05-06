#include "main.h"

/**
 * set_bit - function set a value of bit
 * Prototyp: int set_bit(unsigned long int *n,unsigned int index);
 * @n: is a ptr to get the bit
 * @index: index of bit
 * Return: 1 if worked or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)

		return (-1);

	*n |= 1 << index;
	return (1);
}
