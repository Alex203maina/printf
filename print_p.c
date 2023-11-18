#include "main.h"

/**
 *print_pointer - prints a pointer
 *@val: value
 *
 * Return: integer.
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int z;
	int c, x;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (c = 0; s[c] != '\0'; c++)
		{
			_putchar(s[c]);
		}
		return (c);
	}
	z = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	x = print_hex_plus(z);
	return (x + 2);
}
