#include <stdio.h>
/**
 * main - putchar alphabets
 * Return: Always 0
*/
int main(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
