#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write char c to stdout
 * @c: char to print
 *
 * Return: 1 on success
 * Return -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
