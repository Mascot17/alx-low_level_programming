#include <stdio.h>  
#include <string.h>  

/* main - reverse a string
 * Return: return always 0
 */

int main(void)
{  
	char str[40];
	printf (" \n Enter a string to be reversed: ");
	scanf ("%s", str);
	  
	printf (" \n After the reverse of a string: %s ", strrev(str));
  
  	return 0;
}  
