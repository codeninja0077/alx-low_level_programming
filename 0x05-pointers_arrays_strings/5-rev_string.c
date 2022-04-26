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
	char temp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	c = c - 1;
	c = c / 2;

	while (i < c)
	{
		temp = s[c];
		s[c] = s[i];
		s[i] = temp;
		i++;
		c--;
	}

}
