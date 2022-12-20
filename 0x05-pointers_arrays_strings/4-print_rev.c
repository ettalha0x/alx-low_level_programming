#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* Owned by Ettalha0x
* @s: string to print reversed
* Description: prints a string, in reverse, followed by a new line.
*/
void print_rev(char *s)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	n = i - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}

