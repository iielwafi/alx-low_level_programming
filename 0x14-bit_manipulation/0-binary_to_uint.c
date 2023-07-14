#include "main.h"

/**
 * binary_to_uint - a func converts a binary num to unsigned int
 *
 * Protoype:unsigned int binary_to_uint(const char *b).
 * @b: a ptr to binary str.
 *
 * Return: the converting num, 0/1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int c = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		c = (c << 1) + (b[x] - '0');
	}
	return (c);
}

