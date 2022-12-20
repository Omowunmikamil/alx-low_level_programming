#include <stdlib.h>
#include <stdio.h>
#include <tme.h>

/**
 * main - program that generate random valid password
 * Return: 0
*/

int main(void)
{
	int password[100];
	int x, y, z;

	y = 0;
	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		password[x] = rand() % 78;
		y += (password[x] + '0');
		putchar(password[x] + '0');
		if ((2772 - y) - '0' < 78)
		{
			z = 2772 - y - '0';
			y += z;
			putchar(z + '0');
			break;
		}
	}

	return (0);
}
