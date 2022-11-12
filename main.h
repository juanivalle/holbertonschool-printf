#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *struct op - Struct used to print different types.
 *@op: Data type to print.
 *@f: Function to print;
 **/
typedef struct op
{
	char *op;
	int (*f)(va_list arg);
} op_t;
int op_c(va_list c);
int op_s(va_list s);
int op_d(va_list d);
int op_i(va_list i);
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_op_func(const char *s))(va_list arg);
#endif
