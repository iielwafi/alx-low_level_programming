#include "main.h"

/**
 * clear_bit - fuction display the value of bit
 * @index: is index starting from 0 to the bit
 * @n: ptr of number
 * Prototype: int clear_bit(unsigned long int *n,unsigned int index);
 *
 * Return: 1 if worked or -1 if get fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
	/*prototype of the funcion*/
{

	if (index > sizeof(unsigned long int) * 8)

		return (-1);
	/* if function get a fail return -1*/

	*n &= ~(1 << index);

		return (1);

	/* if function worked return 1*/
}

