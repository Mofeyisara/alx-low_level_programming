#include "main.h"
/**
 * _strstr - Locate a substring
 * @haystack: String
 * @needle: Substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *l = needle;

		while (*i == *l && *l != '\0')
		{
			i++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
	}
	return (0);
}
