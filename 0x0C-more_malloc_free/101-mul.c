#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _is_zero - If a number is zero
 * @argv: Argument vector
 * Return: No return
 */
void _is_zero(char *argv[])
{
	int a, ab1 = 1, ab2 = 1;

	for (a = 0; argv[1][a]; a++)
		if (argv[1][a] != '0')
		{
			ab1 = 0;
			break;
		}

	for (a = 0; argv[2][a]; a++)
		if (argv[2][a] != '0')
		{
			ab2 = 0;
			break;
		}

	if (ab1 == 1 || ab2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - Set memory to zero
 * @ar: Array
 * @lar: Length
 * Return: Pointer
 */
char *_initialize_array(char *ar, int lar)
{
	int a = 0;

	for (a = 0; a < lar; a++)
		ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - Determine length
 * @argv: Argument vector
 * @n: Row of array
 * Return: Length of number
 */
int _checknum(char *argv[], int n)
{
	int l;

	for (l = 0; argv[n][l]; l++)
		if (!isdigit(argv[n][l]))
		{
			printf("Error\n");
			exit(98);
		}
	return (l);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, add, add1, a, b, c, d;
	char *bee;

	if (argc != 3)
	printf("Error\n"), exit(98);
	l1 = _checknum(argv, 1), l2 = _checknum(argv, 2);
	_is_zero(argv), ln = l1 + l2, bee = malloc(ln + 1);

	if (bee == NULL)
	printf("Error\n"), exit(98);
	bee = _initialize_array(bee, ln);
	c = ln - 1, a = l1 - 1, b = l2 - 1, d = add1 = 0;

	for (; c >= 0; c--, a--)
	{
		if (a < 0)
		{
			add = (bee[c] - '0') + add1;
			if (add > 9)
				bee[c - 1] = (add / 10) + '0';
			bee[c] = (add % 10) + '0';
		}
		a = l1 - 1, b--, add1 = 0, d++, c = ln - (1 + d);
	}
	if (b >= 0)
	{
		if (bee[0] != '0')
		ln--;
		free(bee), bee = malloc(ln + 1), bee = _initialize_array(bee, ln);
		c = ln - 1, a = l1 - 1, b = l2 - 1, d = add1 = 0;
	}
	if (b >= 0)
	{
		add = ((argv[1][a] - '0') * (argv[2][b] - '0')) + (bee[c] - '0') + add1;
		add1 = add / 10, bee[c] = (add % 10) + '0';
	}
	printf("%s\n", bee);
	return (0);
}
