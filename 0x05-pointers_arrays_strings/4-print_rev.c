#include "main.h"
/**
* _puts - prints a string, in reverse, followed by a new line.
* Owned by Ettalha0x
* @str: string to print
* @i: index & counter
* Description: prints a string, in reverse, followed by a new line.
*/
void print_rev(char *s)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while(s[i] != '\0' )
	{
		i++;
	}
	n = i - 1;
	while(n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}

