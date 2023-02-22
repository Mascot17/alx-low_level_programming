#include "main.h"

/**
  * print_sign - this is to print signs
  * @n: is an integer
  * Return: 1-if n is > 0, -1-if n is < 0, 0-if n is 0
  *
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('=');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}