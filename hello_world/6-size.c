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
	printf("%zu \n", sizeof(char));
	printf("%zu \n", sizeof(int));
	printf("%zu \n", sizeof(long int));
	printf("%zu \n", sizeof(long long int));
	printf("%zu \n", sizeof(float));
	return (0);
}
