#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * 
 * format: is a character string. The format string is composed of
 * zero of more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int len = _strlen(format);
	const int initialLen = len;
	int index = 0, uindex = 0;
	char *updatedformat = malloc(sizeof(char) * len);
	char *newformat, *anotherformat;
	va_list ap;

	va_start(ap, format);

	while (index <= initialLen)
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == 'c')
			{
				char character = va_arg(ap, int);
				updatedformat[uindex] = character;
				len -= 1;
				index += 2;
				uindex++;
			}
			else if (format[index + 1] == 's')
			{
				const char *myString = va_arg(ap, const char*);
				int sLen = _strlen(myString);
				len += sLen - 2;
				newformat = realloc(updatedformat, sizeof(char) * len);
				updatedformat = newformat;
				updatedformat = _strncat(updatedformat, myString, uindex);
				index += 2;
				uindex += sLen;
			}
		 } else
		 {
			updatedformat[uindex] = format[index];
			index++;
			uindex++;
		 }
	}

	anotherformat = realloc(updatedformat, sizeof(char) * len);
	updatedformat = anotherformat;
	_puts(updatedformat);
	free(updatedformat);
	return (len);
}
