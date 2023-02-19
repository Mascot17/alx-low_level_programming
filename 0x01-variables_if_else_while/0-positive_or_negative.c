#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - This is void
 *
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (a > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (a == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
