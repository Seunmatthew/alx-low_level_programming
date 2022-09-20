#include "main.h"

/**
 * Return lens- Return length of string
 *
 *@a: pointer argument 1
 *@b: pointer argument 2
 */
int _strlen(char *s)
{
	int kont;

	for (kont = 0; *s != '\0'; ++s)
		kont++;
	return (kont);
}
