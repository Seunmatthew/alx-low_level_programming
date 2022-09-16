#include "main.h"
#include<stdio.h>

/**
 *	main - function to check digit
 *	return - (0) if it's a digit and (1) if its not a digit
 *
 */
int main()
	int ch;
	for(ch =48 && ch<=57)
	if(isdigit(ch))
		_putchar("number is digit");
	else
		_putchar("number not digit");
		return(0);
}
