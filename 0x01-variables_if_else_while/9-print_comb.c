#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
*/

int main(void)
{

	char n;
	char s = '0';

	while (s <= '9')
	{
		putchar(s);
		s++;
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
