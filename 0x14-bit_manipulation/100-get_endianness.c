#include "main.h"

/**
 * get_endianness - a function checks the endianness
 * prototype: int get_endianness(void);
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int v;
	char *x;

	v = 1;

	x = (char *) &v;

	return (*x);
}
