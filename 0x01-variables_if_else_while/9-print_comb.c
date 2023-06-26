#include <stdio.h>

/**
 * main - entry point
 * description: prints all possible combinations of single-digit numbers
 * Return: always 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar (n);
		if (n != 57)
		{
		putchar (',');
		putchar (' ');
		}
		n = n + 1;
	}
		putchar ('\n');
		return (0);
}
