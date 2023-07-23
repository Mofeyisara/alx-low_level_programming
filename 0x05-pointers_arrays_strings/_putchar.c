#include <unistd.h>
/**
 * main - Entry point
 * @c: Character
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
