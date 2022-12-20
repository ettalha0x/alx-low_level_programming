#include "main.h"
/**
* _strlen - returns the length of a string
* Owned by Ettalha0x
* @s: string to count length
* @i: index & counter
* Return 0 is success
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;	
	}
	return (i);
}

