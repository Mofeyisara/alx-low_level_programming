#include "main.h"
/**
 * infinite_add - Add two numbers
 * @n1: first number
 * @n2: second number
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - Add the numbers stored in two strings
 * @n1: The string of first number to add
 * @n2: The string of second number to add
 * @r: Buffer to store result
 * @r_index: The current index of the buffer
 *
 * Return: A pointer or 0
 */
char add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		num  = *(n1 - '0') + tens;
		*(r + r_index) + (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}
