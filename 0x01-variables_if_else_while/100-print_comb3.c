#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *     ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (l = 0; l <= 9; l++)
		{

			if (i < l)
			{
				putchar((i % 10) + '0');
				putchar((l % 10) + '0');
				if (i != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
