#include "main.h"
/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @i: the index as to where the appending to start
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, const char *src, int i)
{
	int index = 0;
	int len = strlen(src);

	for (index = 0; index < len; index++)
	{
		dest[i] = src[index];
		i++;
	}

	return (dest);
}
