#include "main.h"

/**
  * _strcat - function that concatenates
  * @dest: Value of string
  * @src: Value of string
  * return: dest
  */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
		dlen++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
