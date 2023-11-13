#include "main.h"

/**
 * printf_string - print a string
 * @val: argument.
 * Return: length of a string
 */
int printf_string(va_list val)
{
char *str;
int i;
int len;

str = va_arg(val, char *);
if (str == NULL)
{
str = "(null)";
}

len = _strlen(str);

for (i = 0; i < len; i++)
{
_putchar(str[i]);
}

return len;
}

