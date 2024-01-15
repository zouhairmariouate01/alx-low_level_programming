#include "main.h"

/**
  * _strchr - Entry point
  * @s: input
  * @c: input
  * Return: Always 0 (Success)
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
