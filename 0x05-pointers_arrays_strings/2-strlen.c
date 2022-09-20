#include "main.h"

/**
 * Return lens- Return length of string
 *
 *@strlen: lenght of a character
 *@s: argument for character lenght
 */
int _strlen(char *s)
{
	int kont;

	for (kont = 0; *s != '\0'; ++s)
		kont++;
	return (kont);
}
