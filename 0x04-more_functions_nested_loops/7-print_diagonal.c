nclude "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int ho, ve;
	if (n <=0)
	{
		_putchar('\n';)
	}
	else
	{
		for(ho = 1; ho <= n; ho++)
		{
			for (ve = 1; ve < ho; ve++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
