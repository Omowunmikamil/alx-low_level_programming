#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * Description: checks the code for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 if c is a digit, else return 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
