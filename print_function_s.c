#include "main.h"

/**
 * printf_string - prints a string
 * @va: argument
 * Return: the length of the string
 */

int printf_string(va_list va)
{
	char *str;
	int i;
	int length;

	str = va_arg(va char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
