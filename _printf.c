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
	char *mutformat = _ownstrdup(format);
	int index = 0, uindex = 0;
	char *updatedformat = malloc(len);
	char *newformat;

	va_list ap;
	va_start(ap, format);
	
	while (index < len)
	{
		if (mutformat[index] == '%')
		{
			if (mutformat[index + 1] == 'c')
			{
				char character = va_arg(ap, int);
				updatedformat[uindex] = character;
				len -= 1;
				index += 2;
				uindex++;
			}
			else if (mutformat[index + 1] == 's')
			{
				char *myString = va_arg(ap, char *);
				int cLen = _strlen(myString);
				len += cLen;
				newformat = realloc(updatedformat, (len + cLen - 2));
				updatedformat = newformat;
				updatedformat = _strncat(updatedformat, myString, uindex, cLen);
				index += 2;
				uindex += cLen;
			}
		 } else
		 {
			updatedformat[uindex] = mutformat[index];
			index++;
			uindex++;
		 }
	}

	free(mutformat);
	_puts(updatedformat);
	free(updatedformat);
	return (len);
}
