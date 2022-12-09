#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int a;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n%10;
	printf("Last digit of %d is %d and is ", n, a);
	if (a < 6 && a != 0)
		printf("less than 6 and not 0\n");
	else if (a > 5)
		printf("greater than 5\n");
	else if (a == 0)
		printf("0\n");

	return (0);
}
