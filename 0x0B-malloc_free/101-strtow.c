#include "main.h"
#include <stdlib.h>
/**
 * count_word - Count the number of words in a string
 * @s: String
 *
 * Return: Number of words
 */
int count_word(char *s)
{
	int flag, c, d;

	flag = 0;
	d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			d++;
		}
	}

	return (d);
}

/**
 * **strtow - Split a string into words
 * @str: String to split
 *
 * Return: Pointer to an array or NULL
 */
char **strtow(char *str)
{
	char **matrix, **tmp;
	int i, m = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - c;
				m++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[m] = NULL;

	return (matrix);
}
