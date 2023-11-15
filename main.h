#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} hello;
int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlength(const char *str);
int print_37(void);
int print_digit(va_list args);
int print_in(va_list args);
int print_bin(va_list val);
int print_uns(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_plus(unsigned int num);
int print_cs(va_list val);
int print_hex_plus(unsigned long int num);
int print_pointer(va_list val);
int print_revs(va_list val);



#endif
