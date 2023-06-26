#include <stdio.h>

/**
 * main - entry point
 * description: prints all the numbers of base 16 in lowercase
 * Return: always 0
 */

int main(void)
{
	int n = 48;
	int m = 97;

		while (n <= 57)
		{
			putchar (n);
			n = n + 1;
		}
		while (m <= 102)
		{
			putchar (m);
			m = m + 1;
		}
		putchar ('\n');
		return (0);
}
