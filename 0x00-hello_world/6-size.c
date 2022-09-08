#include <stdio.h>
int main(void)
{
	printf("size of char: %ld byte(s)\n", sizeof(char));
	printf("Size if int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: &ld byte(s)\n", sizeof(float));
	return (0);
}
