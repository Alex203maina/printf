#include "main.h"

/**
 *print_revs - prints a string in reverse
 *@val: value
 *
 * Return: string to be printed
 */

int print_revs(va_list val)
{
	char *s = va_arg(val, char*);
	int c;
	int i = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		j++;
	}
	for (c = i - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	return (i);
}
