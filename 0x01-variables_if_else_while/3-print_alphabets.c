#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 97;
	char A = 65;

		while (a <= 122)
		{
			putchar(a);
			a = a + 1;
		}
		while (A <= 90)
	{
		putchar(A);
		A = A + 1;
	}
		putchar('\n');
		return (0);
	}
