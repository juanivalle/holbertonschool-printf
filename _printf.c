#include "main.h"
/**
 * _printf - function that produces output according to a formaint.
 * @format: is a character string.
 * Return: the number of characters printed.
 **/
int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	va_list arg;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			counter++;
			i++;
		}
		if (format[i] == '\0')
			return (counter);
		f = get_op_func(&format[i + 1]);
		if (f != NULL)
		{
			counter += f(arg);
			i += 2;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		_putchar(format[i]);
		counter++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(arg);
	return (counter);
}
