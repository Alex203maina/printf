#include "main.h"

/**
 * _strlen - gives the legth of a string
 * @str: string pointer
 * Return: i.
 */

int _strlen(char *str)
{
        int i;

        for (i = 0; str[i] != 0; i++)
                ;
        return (i);
}
/**
 * _strlength - strlength function
 * @str: char pointer
 * Return: i
 */

int _strlength(const char *str)
{
        int i;

        for (i = 0; str[i] != 0; i++)
                ;
        return (i);
}
