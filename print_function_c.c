#include "main.h"

/**
 * printf_charact - prints a character
 * @list: arguments
 * Return: 1
 */
int printf_charact(va_list list)
{
	char str;

	str = va_arg(list, int);
	_putchar(str);
	return (1);
}
