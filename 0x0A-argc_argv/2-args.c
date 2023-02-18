#include "main.h"

/**
* main - print all args received, one per line
* @argc: num of command-line args passed to program
* @argv: array of pointers to command-line args
* $mrklnd
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for ( ; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
