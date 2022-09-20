#include "main.h"

/**
 * _puts - print a string
 *
 *@str: printing a string
 *
 *@_puts: printing a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
		_putchar('\n');

}
