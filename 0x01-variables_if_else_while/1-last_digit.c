#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a text according number
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, m);
	}
	else if (m == 0)
	{
		printf("last digit of %d is %d and is 0", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not zero", n, m);
	}
	printf("\n");
	return (0);
}
