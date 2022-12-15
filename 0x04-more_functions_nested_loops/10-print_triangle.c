#include "main.h"

/**
 * print_triangle - prints a shape for st.output
 * @size: size of the tirangl
 */

void print_triangle(int size)
{
	int depth, width;

	if (size <= 0)
		printf("\n");
	else
	{
		for (depth = 0; depth < size; depth++)
		{
			for (width = 0; width < size; width++)
			{
				if ((width + depth + 1) >= size)
					printf("#");
				else
					printf(" ");
			}
			printf("\n");								}
											}
}
