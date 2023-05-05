#include "main.h"

/**
 * print_binary - fuction print hte binary display rsnt of a num
 * Prototype: void print_binary(unsigned long int n);
 *
 * @n: intiger to be used
 *
 * Return: non
 */
void print_binary(unsigned long int n)
{
	if (n > 1)

		print_binary(n >> 1);
			_putchar((n & 1) + '0');
}

