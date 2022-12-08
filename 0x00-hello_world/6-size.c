#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	printf("Size of a char: %lu 1 byte(s)",sizeof(char));
	printf("Size of a int: %lu 4 byte(s)",sizeof(int));
	printf("Size of a long int: %lu 4 byte(s)",sizeof(long int));
	printf("Size of a long long int: %lu 8 byte(s)",sizeof(long long int));
	printf("Size of a float: %lu 4 byte(s)",sizeof(float));
	return (0);
}

