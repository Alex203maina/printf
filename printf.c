#include "main.h"
/**
 * _printf - printf
 * @format: identifier
 * Return: integer
 */

int _printf(const char *format, ...)
{
	hello n[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}, {"%d", print_digit}, {"%i", print_in}, {"%b", print_bin}
	};

		va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:

	while (format[1] != '\0')
	{
		j = 5;
		while (j >= 0)
		{
			if (n[j].p[0] == format[i] && n[j].p[1] == format[i + 1])
			{
				length = length + n[j].func(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}

