#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last diget of %d is\n and is greater than 5", n);
	}
	else if (n == 0)
	{
		printf("Last diget of %d is\n and is zero", n);
	}
	else
	{
		printf("Last diget of %d is\n and is less than 6", n);
	}
	return (0);
}
