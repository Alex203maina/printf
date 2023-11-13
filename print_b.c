#include "main.h"

/**
 * print_bin - binary converter
 * @val: argument
 * Return: integer
 */

int print_bin(va_list val)
{
	int flag = 0;
	int c = 0;
	int i, b = 1, a;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int k;

	for (i = 0; i < 32; i++)
	{
		k = ((b << (32 - i)) & num);
		if (k >> (31 - 1))
			flag = 1;
		if (flag)
		{
			a = k >> (31 - i);
			_putchar(a + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
