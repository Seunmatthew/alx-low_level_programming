#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return - (0) success
*/

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
						printf("%d is positve\n", n);
					else if (n == 0)
						printf("%d is equal to 0\n", n);
					else
						printf("%d is negative\n", n);
					return (0);
}
Footer
© 2022 GitHub, Inc.
