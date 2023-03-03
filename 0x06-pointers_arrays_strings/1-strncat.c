#include "main.h"
#include <string.h>

/**
 * _strncat - to append some character
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
