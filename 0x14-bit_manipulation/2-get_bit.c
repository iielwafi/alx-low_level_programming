#include "main.h"

/**
 * get_bit - function display the value of bits
 * Prototype:int get_bit(unsigned long int n, unsigned int index);
 * @n:is a number of bit
 * @index: is index will starting from 0 to bit i will give
 *
 * Return: value of bit at index if get an error return NULL
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)

		return (-1);

	if (n & (1 << index))

		return (1);
	else

		return (0);
}
