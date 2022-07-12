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
    int len;
    int len2;
	int testing = 0;
    /*
	unsigned int ui;
	void *addr;
   */

    /*len = _printf("Let's try to printf a simple sentence.\n");*/
    len2 = printf("Let's try to printf a simple sentence.\n");
	testing = len + len2;
	printf("%d", testing);

	return (0);
    /*
	ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
	*/
}
