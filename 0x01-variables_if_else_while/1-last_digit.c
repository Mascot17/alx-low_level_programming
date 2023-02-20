#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - entry point
  *
  * return: Always retun 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 5 )
	{
		printf("%s and is greater than 5\n", n);
	}
	else if ( n == 0 )
	{
		printf("%s and is 0\n", n);
	}
	else
	{
		printf
	return (0);
}
