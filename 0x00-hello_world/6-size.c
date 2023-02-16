#include <stdio.h>

/**
  * main - This prints size of file
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char is=%d byte(s)\n", sizeof(char));
	printf("size of int is=%d byte(s)\n", sizeof(int));
	printf("size of long int is=%d byte(s)\n", sizeof(long));
	printf("size of long long int is=%d byte(s)\n", sizeof(double));
	printf("size of float is=%d byte(s)\n", sizeof(float));
	return (0);
}
