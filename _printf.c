#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int x;
	char c;
	char *s;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	for (i = 0 ; format[i] != '\0' ; i++)
	{

		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
			       		c = va_arg(arg, int);
					_putchar(c);
					i += 2;
					break;

				case 's':
				       	s = va_arg(arg, char*);
					for (x = 0 ; s[x] != '\0' ; x++)
						_putchar(s[x]);
					i += 2;
					break;
			}
		}
		_putchar(format[i]);
	}
	va_end(arg);
	return (i);
}
