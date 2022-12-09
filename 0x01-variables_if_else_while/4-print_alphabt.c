#include <stdio.h>

int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
