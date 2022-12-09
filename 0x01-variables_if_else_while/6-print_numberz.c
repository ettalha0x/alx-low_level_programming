#include <stdio.h>

int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
