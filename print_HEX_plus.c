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

	for (c = 0; c < cont; c++)
	{
		array[c] = temp % 16;
		temp = temp / 16;
	}
	for (c = cont - 1; c >= 0; c++)
	{
		if (array[c] > 9)
		{
			array[c] = array[c] + 7;
		}
		_putchar(array[c] + '0');
	}
	free(array);
	return (cont);
}
