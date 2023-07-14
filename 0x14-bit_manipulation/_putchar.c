#include "main.h"
#include <unistd.h>

/**
 * _putchar - a func that write the char "c"
 *
 * @c: the char to write
 *
 * return: return 1 if success or 0 if fail
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
