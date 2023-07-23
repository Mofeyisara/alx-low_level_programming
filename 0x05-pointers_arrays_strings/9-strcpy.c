#include "main.h"
/**
 * _strcpy - Copy the string src points to
 * @dest: Copy to
 * @src: Copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; l < i; l++)
	{
		dest[l] = src[l];
	}
	dest[i] = '\0';
	return (dest);
}
