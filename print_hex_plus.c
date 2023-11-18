#include "main.h"

/**
 *print_hex_plus - converts values to hex
 *@num: value to be converted
 *
 * Return: hex value count.
 */

int print_hex_plus(unsigned long int num)
{
	long int c, cont = 0;
	long int *array;
	unsigned long int temp = num;

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
			array[c] = array[c] + 39;
		}
		_putchar(array[c] + '0');
	}
	free(array);
	return (cont);
}
