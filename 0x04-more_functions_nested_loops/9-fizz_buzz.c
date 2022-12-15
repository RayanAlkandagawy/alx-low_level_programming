#include <stdio.h>
/**
 * main - fizz buzz fizzbuzz stupid task
 * Return: 0 always
 */

int main(void)
{
	int i;
	char space;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
			space = ' ';
		else
			space = '\n';
		if ((i % 15) == 0)
			printf("FizzBuzz%c", space);
		else if ((i % 5) == 0)
			printf("Buzz%c", space);
		else if ((i % 3) == 0)
			printf("Fizz%c", space);
		else
			printf("%i%c", i, space);					}
	return (0);
}
