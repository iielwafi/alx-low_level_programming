#include "main.h"

/**
 * flip_bits - a func that returns the num of bit
 * @n: number one
 * @m: second num
 *
 * return: num of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, a = 0;
	unsigned long int set;
	unsigned long int i = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		set = i >> x;
	if (set & 1)
	a++;

	}

	return (a);
}
