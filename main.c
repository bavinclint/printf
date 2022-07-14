#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len3, len4;
	/*int testing = 0;*/
    /*
	unsigned int ui;
	void *addr;
   */

    len = _printf("Chelsea Football Club\n");
	len3 = _printf("%s is an arid area plant\n", "Cactus");
	len4 = printf("%s is an arid area plant\n", "Cactus");
	/*testing = len + len2;*/
	printf("%d %d %d", len, len3,  len4);

	return (0);
    /*
	ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
	*/
}
