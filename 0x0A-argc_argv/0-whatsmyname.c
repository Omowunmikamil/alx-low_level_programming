#include <stdio.h>

/**
 * main - prints its name of the program
 * @argc: num of command line arguments
 * @argv: array name
 * Return: 0
*/

int main(int argc, char argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
