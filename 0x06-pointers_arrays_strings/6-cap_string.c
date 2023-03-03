#include "main.h"

/**
  *cap_string - capitalizes all words of a string
  *@str: string to be capitalize
  *@c: input value
  *Return: a pointer
  */

char *cap_string(char *c)
{

	int z = 1;

	while (str != 0)
	{
		if (z)
		{
			z = 0;
			if (str >= 'a' && str <= 'z')
			{
				str -= 32;
			}
		}
		if (str == ' ' ||
		    str == '\t' ||
		    str == '\n' ||
		    str == ',' ||
		    str == ';' ||
		    str == '.' ||
		   str == '!' ||
		    str == '?' ||
		    str == '"' ||
		    str == '(' ||
		    str == ')' ||
		    str == '{' ||
		    str == '}')
		{
			z = 1;
		}
	}
	return (c);
}
