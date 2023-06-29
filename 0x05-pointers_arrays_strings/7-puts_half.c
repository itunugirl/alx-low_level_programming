#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: prints half of a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	unsigned int i;

	for (i = (strlen(str) + 1) / 2; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
