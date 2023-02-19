#include "main.h"

/**
* main - multiply 2 numbers, if 2 num not given print Error & return 1
* @argc: num of command-line args passed to program
* @argv: array of pointers to command-line args
* $mrklnd
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	product = i * j;

	printf("%d\n", product);
	return (0);
}
