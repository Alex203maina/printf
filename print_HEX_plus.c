#include "main.h"

/**
 *print_HEX_plus - converts an integer to hex
 *@num: integral argument
 *Return: hexadecimal counter
 */

int print_HEX_plus(unsigned int num)
{
	int c, cont = 0;
	int *array;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		cont++;
	}
	cont++;
	array = malloc(sizeof(int) * cont);

	for (i = 0; i < cont; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = cont - 1; i >= 0; i++)
	{
		if (array[i] > 9)
		{
			array[i] = array[i] + 7;
		}
		_putchar(array[i] + '0';
	}
	free(array);
	return (cont);
}
