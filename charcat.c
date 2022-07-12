#include "main.h"

/**
 * _charcat - Concatenates a char to a source string using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The char to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_charcat(char *dest, char src)
{
	int dest_len = 0, index = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	dest[dest_len++] = src;
	
	return (dest);
}
