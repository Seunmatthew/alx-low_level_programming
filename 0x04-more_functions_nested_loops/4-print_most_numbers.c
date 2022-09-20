/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if ((c == 2 || c == 4))
			continue;
		else

		{
			_putchar(i + '0');
		}
			_putchar('\n');
}

