#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints strings in reverse
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}

	for (i = c - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
