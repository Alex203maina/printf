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
		_putchar(array[i] + '0');
	}

	free(array);
	return (cont);
}
