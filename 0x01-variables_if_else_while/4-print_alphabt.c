#include <stdio.h>

/**
 * main - entry point
 * description:  prints the alphabet in lowercase, followed by a new line.
 * Return: always 0
 */

int main(void)
{
	int a = 97;
		while (a <= 122)
		{
			if (a == 113 || a == 101)
			{
			a = a + 1;
			continue;
			}
			putchar (a);
			a = a + 1;
		}
	putchar ('\n');
		return (0);
}
