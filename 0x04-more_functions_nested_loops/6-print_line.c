#include "main.h"

/**
 * print_line - print straight line to st.output
 * @c: line length
 */
void print_line(int c)
{
	int i;

	if (c > 0)
	{
		for (i = 0; i < c; i++)
			_putchar('_');
	}
	_putchar('\n');
}
