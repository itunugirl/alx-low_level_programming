#include <stdio.h>

/**
 * main - entry point
 * description: prints all single digit numbers of base 10 starting from 0
 * Return: always 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
	printf("%d", n);
	n = n + 1;
	}
	printf("\n");
	return (0);
}
