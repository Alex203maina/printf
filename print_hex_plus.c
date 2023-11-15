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
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = cont - 1; i >= 0; i++)
	{
		if (array[i] > 9)
		{
			array[i] = array[i] + 39;
		}
		_putchar(array[i] + '0');
	}
	free(array);
	return (cont);
}
