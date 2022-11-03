#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	char *printed;
	unsigned int i = 0;
	char *s;

	va_list arg;
	va_start(argumento, format);

	for(printed = 0 ; *printed != '\0' ; printed++)
	{	
		while(*printed != '%')
		{
			_putchar(*printed);
			printed++;
		}

		switch (*printed)
		{
			case 'c': i = va_arg(arg, int);
				_putchar(i);
				break;

			case 's': i = va_arg(arg, char*);
				 _putchar(s);
				 break;
		}
	printed++
	}	
