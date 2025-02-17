#include <stdio.h>
/*
 * main - Entry point
 *
 * Description:  prtints the size of various types on the computer
 * Return always 0 ;
 *
 */
int main(void)
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long int));
	printf("%d\n", sizeof(long long int));
	printf("%d\n", sizeof(float));
	return (0);
}
