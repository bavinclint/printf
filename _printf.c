
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
	va_list ap;
	va_start(ap, format);
	int len = strlen(format);
	int index = 0;
	char *updatedformat = '';
	
	while (index < len)
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == 'c'|| format[index + 1] == 's')
			{
				char *character = va_arg(ap, char *);
				cLen = strlen(character);
				updatedformat = _strncat(updatedformat, character, cLen)
			}
			index += 2;
		} else
		{
			updatedformat = _strncat(updatedformat, format[index], 1)
			index++;
		}
	}
	puts(updatedformat);
}
