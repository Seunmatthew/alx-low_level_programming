#include "main.h"
#include<stdio.h>

/**
 *	main - function to check digit
 *
 *	return - (0) if it's a digit and (1) if its not a digit
 *
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
