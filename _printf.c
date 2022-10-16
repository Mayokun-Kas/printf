#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - similar to prinff in stdio
 * @format: character string composed of zero or more directives
 * Return: the number of characters printed
 * excluding the null byte used to end output to strings
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int printedChar = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		printedChar++;
	}

	return (printedChar);
}
