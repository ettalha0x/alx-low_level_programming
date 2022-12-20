#include "main.h"
/**
* rev_string - reverse a string
* Owned by Ettalha0x
* @s: string to revers
* Description: reverse a string
*/
void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	b = 0;
	while (c >= 0 && b < c)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
		c--;
		b++;
	}
}
