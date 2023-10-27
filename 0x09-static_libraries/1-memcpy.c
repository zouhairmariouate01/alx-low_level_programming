#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_pt = dest;
	char *src_pt = src;

	while (n-- > 0)
	{
		*dest_pt++ = *src_pt++;
	}
	return (dest);
}
