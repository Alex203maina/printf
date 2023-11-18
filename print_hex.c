#include "main.h"

/**
 * print_hex - converts integers to hexadecimal
 *@val: conversion value
 *
 * Return: hexadecimal counter
 */

int print_hex(va_list val)
{
	int i, cont = 0;
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
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (cont);
}
