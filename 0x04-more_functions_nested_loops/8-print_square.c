/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int ve, ho;
	if(size <= 0)
{
	_putchar('\n');
}
	else
{
		for (ve = 1; ve <=size; ve++)
	{
	_putchar('#');
			for (ho = 2; ho <= size; ho++)
			{
				_putchar('#');
			}
				_putchar('\n');
	}
			
}


}
