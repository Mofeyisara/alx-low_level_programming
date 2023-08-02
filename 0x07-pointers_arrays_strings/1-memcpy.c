#include "main.h"
/**
 * *_memcpy - Copy memory area
 * @dest: Store
 * @src: Copy memory to
 * @n: Num of bytes
 * Return: Copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
