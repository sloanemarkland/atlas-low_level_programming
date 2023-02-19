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
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int sum = i * j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);
	return (0);
}
