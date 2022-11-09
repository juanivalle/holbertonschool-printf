#include "main.h"
/**
 * op_c - adds a char
 * @c: the char
 * Return: 1
 */

int op_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * op_s - adds a string
 * @s: the string
 * Return: count
 */

int op_s(va_list s)
{
	int counter = 0;
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}

	return (counter);
}
/**
 * op_i - add a int
 * @i: int
 * Return: counter
 */
int op_i(va_list i)
{
	int x, dc = 1, counter = 0;
	unsigned int num;

	x = va_arg(i, int);

	if (x < 0)
	{
		counter += _putchar('-');
		num = x * -1;
	}

	else
	{
		num = x;
	}

	while (num / dc > 9)
		dc = dc * 10;

	while (dc != 0)
	{
		counter += _putchar((num / dc) + '0');
		num = num % dc;
		dc = dc / 10;
	}
	return (counter);
}
/**
 * op_d - function that prints a int
 * @d: int
 * Return: counter
 */
int op_d(va_list d)
{
	int x, dc = 1, counter = 0;
	unsigned int num;

	x = va_arg(d, int);

	if (x < 0)
	{
		counter += _putchar('-');
		num = x * -1;
	}
	else
	{
		num = x;
	}

	while (num / dc > 9)
		dc = dc * 10;

	while (dc != 0)
	{
		counter += _putchar((num / dc) + '0');
		num = num % dc;
		dc = dc / 10;
	}
	return (counter);
}
