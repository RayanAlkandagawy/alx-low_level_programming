#include "main.h"
#include <stdio.h>
/**
 * print_times_table- print n times table
 * @n: table dimentions
 * Retutn: void
 */

void print_times_table(int n)
{
	int i, j, x;
	char ender;
		if ((n >= 0) & (n <= 15))
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					x = i * j;
					if (j < n)
						ender = ',';
					else
							ender = '\n';
					if (j == 0)
						printf("%i%c", 0, ender);
					else if (x <= 9)
						printf("%i%c", x, ender);
					else if (x <= 99)
						printf("  %i%c", x, ender);
					else
																																					printf(" %i%c", x, ender);
																																			}
									}
	}
}
