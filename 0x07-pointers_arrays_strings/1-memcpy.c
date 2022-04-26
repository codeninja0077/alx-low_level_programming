#include "main.h"
/**
 * _memcpy - copies value in memory src to memory destination
 * @dest: the new location value is copied to
 * @src: the old location value is copied from
 * @n: the number of bytes or values copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}
