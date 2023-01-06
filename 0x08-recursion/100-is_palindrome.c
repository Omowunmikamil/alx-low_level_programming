#include "main.h"

/**
 * is_palindrome - takes pointer to int
 * @s: accespts input saved in s
 * Return: 0
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length
 * @s: string to calculate the length
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks character recursively
 * @s: string
 * @i: iterator
 * @len: length
 * Return: 1 if palindrome or 0
*/

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}
