#include "main.h"

/**
 * get_endianness - a func that checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;

		char *i = (char *) &x;

	return (*i);
}
