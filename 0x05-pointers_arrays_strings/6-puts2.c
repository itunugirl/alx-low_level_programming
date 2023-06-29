#include "main.h"
/**
 * puts2  -  prints every other character of a string,
 * starting with the first character
 * @str: print string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
for (i = 0; str[i] != '\0'; i = i + 2)
{
printf("%c", str[i]);
}
printf("\n");
return;
}
