
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
	int index = 0;
	char *updatedformat;

	va_list ap;
	va_start(ap, format);
	
	while (index < len)
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == 'c')
			{
				char character = va_arg(ap, int);
				updatedformat = _charcat(updatedformat, character);
			}
			index += 2;
		} else if (format[index + 1] == 's')
		{
			char *character = va_arg(ap, char *);
			int cLen = _strlen(character);
			updatedformat = _strncat(updatedformat, character, cLen);
		}else
		{
			updatedformat = _charcat(updatedformat, format[index]);
			index++;
		}
	}
	_puts(updatedformat);
	return (_strlen(updatedformat) - 1);
}
