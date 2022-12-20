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

	i = _strlen(*s);
	while(i >= 0 )
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

