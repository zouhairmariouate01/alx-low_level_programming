#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int lenn = 0;

	while (*s != '\0')
	{
		lenn++;
		s++;
	}
	return (lenn);
}
/**
 * _strcpy - copies the contents of one string into another
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

