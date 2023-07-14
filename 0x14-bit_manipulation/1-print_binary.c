#include "main.h"


/**
 * print_binary - a func that prints the binary of a num
 * Prototype: void print_binary(unsigned long int n)
 *
 * @n: num to print in binary
 */
void Print_binary(unsigned long int n)
{
	int x, num = 0;

	unsigned long int milo;

	for (x = 63; x >= 0; x--)
	{
		milo = n >> x;

		if (milo & 1)
		{
			_putchar('1');
		num++;
		}
		else if (num)

			_putchar('0');
	}
	if (!num)
	_putchar ('0');
}
