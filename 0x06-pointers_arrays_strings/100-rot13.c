#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: string given
 * Return: encoded string
 */
char *rot13(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			s[i] += 13;
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			s[i] -= 13;
	i++;
	}
	return (s);
}