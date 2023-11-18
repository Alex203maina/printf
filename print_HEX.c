#include "main.h"

/**
 * print_HEX - converts integers to HEX
 * @val: conversion value
 *
 * Return: HEX counter
 */

int print_HEX(va_list val)
{
	int c, cont = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
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
