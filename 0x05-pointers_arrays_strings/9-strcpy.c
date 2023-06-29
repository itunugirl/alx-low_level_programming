#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; i <= strlen(src); i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
