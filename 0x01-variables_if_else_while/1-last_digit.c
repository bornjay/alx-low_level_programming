#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int L;
	char str[] = "last digit of";

	srand(time(0));
	n = rand() - PAND_MAX / 2;
	L = n % 10;

	if (L > 5)
		printf("%s %d is %d and is greater than 5\n", str , n , L);
	else if ( L < 6)
		print("%s %d is %d and is less than 6 and not 0\n", str , n ,L);
	return (0);
}
