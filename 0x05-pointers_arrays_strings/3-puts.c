#include "main.h"

/**
 * swap_int - swaps the values pointed to by arguments
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
