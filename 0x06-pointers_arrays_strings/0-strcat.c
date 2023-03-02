#include "main.h"

/**
  *_strcat - function that conatenate two strings
  *@dest: String input
  *@src: String input
  *
  *Return: newly concatenated dest
  */

char *_strcat(char *dest, char *src)
{

	int dest_len = 0;
	int src_len = 0;

	while (src[src_len] != '\0')
	{
		dest_len++;
		dest[dest_len] = src[src_len++];
	}
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	dest[dest_len++] = '\0';

	return (dest);
}
