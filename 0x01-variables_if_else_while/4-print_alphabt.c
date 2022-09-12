#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	
int n;

		srand(time(0));
			n = rand() - RAND_MAX / 2;
		srand(time(0));
			n = rand() - RAND_MAX / 2;
	char c = 'a';

		while (c <= 'z')
			{
				if (c != 'q' && c != 'e')
					putchar(c);
					c++;
			}
				putchar('\n');

				return (0);
}
