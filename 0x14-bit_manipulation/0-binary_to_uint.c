#include "main.h"

/**
 * binary_to_uint - change a binary num to intiger
 * @b: ptr to str of 0 end 1 char
 *
 * Return: change number if 1 int str is valid or 0 return NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int v;

	int z;

	v = 0;

	if (b == NULL)
		return (0);
	for (z = 0; b[z] != '\0'; z++)
	{

		if (b[z] != '0' && b[z] != '1')
		return (0);

		v *= 2;

		if (b[z] == '1')
		v++;
	}
	return (v);

}
