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

	for (i = 0; i < cont; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = cont - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}

	free(array);

	return (cont);



}
