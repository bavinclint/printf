#ifndef PROTOPRINTF_H
#define PROTOPRINTF_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
char *prep_string(char *str, specifier spec);

#endif
