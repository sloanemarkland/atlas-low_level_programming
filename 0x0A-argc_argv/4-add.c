#include "main.h"

/**
* main - add positive int. if no num, print 0.
* @argc: num of command-line args passed to program
* @argv: array of pointers to command-line args
* $mrklnd
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, sum; /**i refers to which string, j is element in str*/

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
