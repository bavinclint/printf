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
