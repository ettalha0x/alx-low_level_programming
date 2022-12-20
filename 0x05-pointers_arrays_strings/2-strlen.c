#include "main.h"
/**
* _strlen - returns the length of a string
* Owned by Ettalha0x
* @s: string to count length
* Description: this will return the length of a string
* Return i the length of string
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

