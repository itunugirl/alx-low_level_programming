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
	putchar (n + 48);
	n = n + 1;
	}
	putchar('\n');
	return (0);
}
