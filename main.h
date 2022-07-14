#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _strlen(const char *s);
void _puts(char *s);
char *_strncat(char *dest,const char *src, int i, int n);
int _printf(const char *format, ...);
char *_ownstrdup(const char *str);
char *_strcpy(char *dest, const char *src);

#endif
