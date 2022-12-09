#include <stdio.h>

/**
 * main - rints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
