#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_all - prints ANYTHING
* @format: list of types of argument$
* Return: nada
*/
void print_all(const char * const format, ...)
{
	va_list schmorg_args;
	const char *p = format;
	int i = 0;
	float f;
	char *s;

	va_start(schmorg_args, format);

	while (*p)
	{
		if (*p == 'c')
		{
			i = va_arg(schmorg_args, int);
			printf("%c", i);
		}
		else if (*p == 'd')
		{
			i = va_arg(schmorg_args, int);
			printf("%d", i);
		}
		else if (*p == 'f')
		{
			f = va_arg(schmorg_args, double);
			printf("%f", f);
		}
		else if (*p == 's')
		{
			s = va_arg(schmorg_args, char *);
			printf("%s", s);
		}
		p++;
	}
	printf("\n");
	va_end(schmorg_args);
}
