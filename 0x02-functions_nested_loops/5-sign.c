#include "main.h"

/**
 * print_sign - check numers
 * @n : number to check
 * Return:0 or 1
 */

int print_sign(int n)
{
int rtValue;

if (n > 0)
{
	rtValue = 1;
	_putchar('+');
}
else if (n == 0)
{
	rtValue = 0;
	_putchar('0');
}
else
{
	rtValue = -1;
	_putchar('-');
}

return (rtValue);
}
