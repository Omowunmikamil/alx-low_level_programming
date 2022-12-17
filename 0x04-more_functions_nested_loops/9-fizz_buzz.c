#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz instead of
 * the number and for the multiples of five print Buzz
 * Return: Always 0
*/

int main(void)
{
	int x;

	for (x = 1; <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
