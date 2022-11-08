#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	int n;
	int x;
	char c;
	char *s;
	int i;
	int cont = 0;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	for (n = 0 ; format[n] != '\0' ; n++)
	{
		if (format[n] == '%')
		{
			switch (format[n + 1])
			{
				case 'c':
			       		c = va_arg(arg, int);
					_putchar(c);
					cont++;
					n += 2;
					break;

				case 's':
				       	s = va_arg(arg, char*);
					for (x = 0 ; s[x] != '\0' ; x++)
					{
						_putchar(s[x]);
						cont++;
					}
					n += 2;
					break;

				case 'i':
					i = va_arg(arg, int);
					_putchar(i);
					cont++;
					n += 2;
					break;

				default :
					_putchar(format[n]);
					cont++;
					break;

			}
		}
		if (format[n] != '%')
		{
			_putchar(format[n]);
			cont++;
		}
	}
	va_end(arg);
	return (cont);
}
