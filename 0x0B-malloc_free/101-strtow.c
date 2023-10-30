#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * get_nwords - get the number of space separated words in `s'
 * @s: string to search
 * Return: number of words in `s'
 */
int get_nwords(char *s)
{
	int i = 0, nnwords = 0;

	while (s[i])
	{
		while (s[i] && s[i] == ' ')
			++i;
		if (s[i] == '\0')
			break;
		while (s[i] && s[i] != ' ')
			++i;
		++nnwords;
	}
	return (nnwords);
}

/**
 * strtow - split `str' into array of words using spaces to delimit words
 * @str: string of space-separated words
 *
 * Return: pointer to array of strings, or NULL on failure
 */

char **strtow(char *str)
{
	int i, n, m, nwords, ennd, beggin;
	char **pt;

	if (str == NULL || *str == '\0')
		return (NULL);
	nwords = get_nwords(str);
	if (nwords == 0)
		return (NULL);
	++nwords;
	pt = (char **) malloc(nwords * sizeof(char *));
	if (pt == NULL)

