#include "main.h"

/**
  * _isalpha - check for capital letter
  *@c: the character to be checked
  * Return: 1-if c is a letter,0-if c is lower or uppercase
  *
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
