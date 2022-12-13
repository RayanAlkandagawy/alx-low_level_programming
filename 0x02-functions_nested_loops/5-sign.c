#include "main.h"

/**
 * print_sign - check the sign and print it
 *
 * @n : input to be checked.
 *
 * Return: 1 if positive, -1 if nigative, 0 if 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
