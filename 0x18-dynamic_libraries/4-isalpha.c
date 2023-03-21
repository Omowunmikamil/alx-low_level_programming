#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Description: checks the code for alphabetic character
 * @c: is the character to be checked
 * Return: 1 if c is a lowercase or a uppercase letter, else return 0
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
