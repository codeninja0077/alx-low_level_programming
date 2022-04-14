#include "main.h"

/**
 * main - print_alphabet
 * Return:0
 */

void print_alphabet(void)
/**
 * Check variable against allthe letters of the 
 * and print the variable on anew line
 */
{
char c = 'a';

while (c <= 'z')
{
	_putchar(c);
	c++;
}
_putchar('\n');
}
