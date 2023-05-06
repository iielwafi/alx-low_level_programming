#include "main.h"

/**
 * flip_bits - function return num of bit to swap wite another number
 * Prototype:unsigned int flip_bits(unsigned long int n , unsigned long int m);
 * @m: is a integer
 * @n: isa a integer
 *Return: swap the numbers of bit white another number bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
	/*name function*/
{

	unsigned long int i;

	unsigned int x;

	i = n ^ m;
	/*^: is a operator used to compare binary number n end m*/
	x = 0;

	while (i)
	{
		x++;
		i &= i - 1;
	}
	return (x);
}

