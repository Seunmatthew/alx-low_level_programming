#include "main.h"

/**
 * print_rev - printed values in reverse order
 *
 *
 */
 void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	for (--n; n >= 0; --n)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
