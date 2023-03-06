#include <stdio.h>
#include "3-calc.h"

/**
* main - operate on two ints. if no num, print 0.
* @argc: num of command-line args passed to program
* @argv: array of pointers to command-line args
* $mrklnd
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*opfunk)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opfunk = get_op_func(argv[2]);

	if (opfunk == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 ||
		strcmp(argv[2], "%") == 0) &&
		atoi(argv[3]) == 0)
	{
	printf("Error\n");
	exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", opfunk(num1, num2));

	return (0);
}
