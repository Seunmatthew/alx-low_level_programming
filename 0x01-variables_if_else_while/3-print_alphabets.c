#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return - 0 (success)
 */
int main(void)
	{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					{
						char c = 'a';
						char C = 'A';

						while (c <= 'z')
							{
								putchar(c);
								c++;
							}
						while(C <= 'Z')
							{
								putchar(C);
								C++;
							}
								putchar('\n');
					return (0);
	}
