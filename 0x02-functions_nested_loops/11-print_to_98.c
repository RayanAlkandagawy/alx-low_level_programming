#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers til 98
 * @n: starting point
 * Return: void
 */

void print_to_98(int n)
{
		if (n <= 98)
		{
			for (; n <= 98; n++)
			{
			if (n < 98)
				printf("%i, ", n);
			}
		}
		else
		{
			for (; n >= 98; n--)
			{
				if (n > 98)
					printf("%i, ", n);						}
		}
		printf("98\n");
}
