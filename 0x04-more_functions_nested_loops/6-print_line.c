#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int lo;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lo = 1; lo <= n; lo++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}




}
