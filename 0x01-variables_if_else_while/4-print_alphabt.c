#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
  **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' || i != 'q')
		{
		putchar(i);
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
