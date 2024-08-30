#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_charact(va_list list);
int printf_string(va_list list);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);

#endif
