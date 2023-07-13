#include "main.h"

/**
 * str_checker - check if strings are identical
 * @s1: string1 base address
 * @s2: string2 base address
 * @a: left index
 * @b: classic index
 * Return: 1 if strigs are identical, else return 0
*/

int str_checker(char *s1, char *s2, int a, int b)
{
	if (s1[a] == '\0' && s2[b] == '\0')
		return (1);
	if (s1[a] == s2[b])
		return (str_checker(s1, s2, a + 1, b + 1));
	if (s1[a] == '\0' && s2[b] == '*')
		return (str_checker(s1, s2, a, b + 1));
	if (s2[b] == '*')
		return (str_checker(s1, s2, a + 1, b) || str_checker(s1, s2, a, b + 1));
	return (0);
}

/**
 * wildcmp - checks if strings could be considered identical
 * @s1: string base address
 * @s2: string base address
 * Return: 1 if strings are considered identical
*/

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
