#include "main.h"
/**
 * main - putchar a string
 *
 * Return: 0
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;
	int z = strlen(ch);

		for (i = 0; i < z ; i++)
		_putchar(ch[i]);
	_putchar('\n');
		return (0);
}
