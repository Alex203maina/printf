#include "main.h"

/**
 * print_oct - converts integer to octal
 * @val: variable parameter
 *
 * Return: counter of octals
 */

int print_oct(va_list val)
{
	int c, cont = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		cont++;
	}
	cont++;
	array = malloc(sizeof(int) * cont);

	for (c = 0; c < cont; c++)
	{
		array[c] = temp % 8;
		temp = temp / 8;
	}
	for (c = cont - 1; c >= 0; c--)
	{
		_putchar(array[c] + '0');
	}

	free(array);
	return (cont);



}
