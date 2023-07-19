#include "function_pointers.h"
#include <stdlib.h>
$include <stdio.h>
#include "3.calc.h"
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Argument variable
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (grt_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	pritnf("%d\n", get_opp_func(op)(num1, num2));

	return (0);
}
