#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - Concat 2 strings
 * @n: Number of bytes
 * @s1: First string string
 * @s2: Second string
 * Return: Pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;
	{
		while (s1 && s1[len1])
			len1++;
		while (s2 && s2[len2])
			len2++;

		if (n < len2)
			s = malloc(sizeof(char) * (len1 + n + 1));
		else
			s = malloc(sizeof(char) * (len1 + len2 + 1));

		if (!s)
			return (NULL);

		while (a < len1)
		{
			s[a] = s1[a];
			a++;
		}

		while (n < len2 && a < (len1 + n))
			s[a++] = s2[b++];

		while (n >= len2 && a < (len1 + len2))
			s[a++] = s[b++];

		s[a] = '\0';

		return (s);
	}
}