#include "main.h"

/**
 * _strlen_recursion - print the length of the string.
 * @s: string to be printed
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if s is palindrome
 * @s: string
 * @i: iterator
 * @len: length
 * Return: 1 if s is palindrome, or 0 if otherwise
*/

int check_pal(char *s, int i, int len)
{
	if (s[i] == s[len])
		if (i > len / 2)
			return (1);
		else
			return (check_pal(s, i + 1, len - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if s is pal
 * @s: string base address
 * Return: 1 if palindrome or 0 if otherwise
*/

int is_palindrome(char *s)
{
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
