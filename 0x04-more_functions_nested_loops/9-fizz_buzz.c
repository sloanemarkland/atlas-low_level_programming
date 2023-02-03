#include <stdio.h>

/**
* main - print 1-100 except mult of 3,5, and 3x5
*
* Return: Always 0
*/

int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz, ");
		}
			else if (num % 3 == 0)
			{
				printf("Fizz, ");
			}
			else if (num % 5 == 0 && num != 100)
			{
				printf("Buzz, ");
			}
			else if (num == 100)
			{
				printf("Buzz");
			}
		else
		{
			printf("%d, ", num);
		}
	}
	printf("\n");
	return (0);
}
