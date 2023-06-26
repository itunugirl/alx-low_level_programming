#include <stdio.h>

/**
 * main - entry point
 * description: prints the lowercase alphabet in reverse
 * Return: always 0
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar (n);
		n = n - 1;
	}
	putchar ('\n');
	return (0);
}
