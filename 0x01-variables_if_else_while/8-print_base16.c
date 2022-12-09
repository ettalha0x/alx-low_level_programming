#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 0;
	b = 'a';
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
