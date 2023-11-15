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
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	z = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	x = print_hex_plus(z);
	return (x + 2);
}
