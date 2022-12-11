#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
*/

int main(void)
{

	int x = 0;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	putchar('\n');
	return (0);
}
