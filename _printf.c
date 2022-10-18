#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	int i, n = strlen(format);
	void *x;
	va_list arg;
	va_start(arg, format);
   
	if (format != NULL)
	{
	putchar(format);
	putchar('\n');
	}
	for(i = 0; i < n; i++)
	{
		if (format[i] == ('%' && 'c'))
		{
		char x = va_arg(arg, char);
		}
		if (format[i] == ('%' && 's'))
		{
			char *x = va_arg(arg, char *);
		}
		if (format[i] == ('%' && 'd'))
		{
			int *x = va_arg(arg, int *);
		}
		if (format[i] == ('%' && 'i'))
		{
		int x = va_arg(arg, int);
		}
	}
	
	va_end(arg);
	return (write(0, &x, 0));
	
}
