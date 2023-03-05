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
	int num1, num2, *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[3], "+") != 0 &&
    	strcmp(argv[3], "-") != 0 &&
    	strcmp(argv[3], "*") != 0 &&
    	strcmp(argv[3], "/") != 0 &&
    	strcmp(argv[3], "%") != 0)
	{
    printf("Error\n");
    exit(99);
	}
	if ((strcmp(argv[3], "/") == 0 || 
		strcmp(argv[3], "%") == 0) && 
		atoi(argv[4]) == 0)
	{
    printf("Error\n");
    exit(100);
	}

	num1 = atoi(argv[2]);
	num2 = atoi(argv[4]);

}
