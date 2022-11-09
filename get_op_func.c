#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - Select the correct operator
 * Return: operator
 * @format: chars digited by the user
**/
int (*get_op_func(const char *format))(va_list arg)
{
	op_t ops[] = {
		{"d", op_i},
		{"i", op_d},
		{"s", op_s},
		{"c", op_c},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *format)
		break;

		i++;
	}
	return (ops[i].f);
}
