#include "main.h"
#include <unistd.h>
/**
 * _putchar - Entry point
 *&c: The character to print
 * Return: 1.
 * On error, -1 is returned
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
