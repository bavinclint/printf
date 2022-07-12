#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _strlen(const char *s);
void _puts(char *s);
char *_strncat(char *dest, char *src, int n);
char *_charcat(char *dest, char src);
int _printf(const char *format, ...);
char *_ownstrdup(const char *str);

#endif
