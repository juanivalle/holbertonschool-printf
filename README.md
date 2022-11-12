# holbertonschool-printf

Working team:

* Darian Grabino
[@dariangrabino](https://github.com/DarianGrabino)
* Juan Valle
[@juanivalle](https://github.com/juanivalle)



> Index

- [_printf](#_printf)
- [dependencies](#dependencies)
- [Description](#description)
- [Flowchart](#flowchart)


## Description

The function represents the capabilities of the printf function that is included in the C library file stdio.h.
This time we are reduced to using the following conversion specifiers: c, s, d, i. Each of which begins with the % character.
The first argument that printf receives is fixed and is the format string, it describes the format that will be applied to the corresponding argument.

## File Description
- **_printf.c** - contains function _printf which gives the stdout according to format specifier.
- **_putchar** - contains function _putchar which prints a character to stdout.
- **get_op_fun.c** -
- **function_for_printf.c** - contains several functions that are selected according to format specifier.
- **main.h ** - header file which contains all function prototypes used for _printf.
- **man_3_printf** - manual of out _printf

### Compilation & Testing
Function porototype:
*int _printf(const char *format, ...);
We compile with:
*gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c



