#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	int n;
	int lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNumber = n % 10;

	if (lastNumber > 5)
	{
	printf("Last digit of %d is %d and is greater than 5 and not 0\n",
	n, lastNumber);
	}
	else if (lastNumber == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastNumber);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",
	n, lastNumber);
	}
	return (0);
}
