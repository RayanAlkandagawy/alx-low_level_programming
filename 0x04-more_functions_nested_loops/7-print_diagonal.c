#include "main.h"

/**
 * print_diagonal - draw a diagnal line to st.output
 * @n: length of the line
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
