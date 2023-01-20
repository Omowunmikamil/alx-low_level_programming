#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * chk_char - prints char character
 * @list: type
 * Return: Nothing
*/
void chk_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * chk_int - prints int
 * @list: type
 * Return: Nothing
*/
void chk_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * chk_float - prints float
 * @list: type
 * Return: Nothing
*/
void chk_float(va_list list)
{
	printf("%f", va_list(list, double));
}

/**
 * chk_string - prints string
 * @list: type
 * Return: Nothing
*/
void chk_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Nothing
*/
void print_all(const char * const format, ...)
{
	check_t types[] = {
		{"c", chk_char},
		{"i", chk_int},
		{"f", chk_float},
		{"s", chk_string},
		{NULL, NULL}
	};

	int i = 0, j = 0;
	va_list list;
	char *sep = "";

	va_Start(list, format);
	while (format && format[i])
	{
		while (types[j].chk)
		{
			if (format[i] == *types[j].chk)
			{
				printf("%s", sep);
				types[j].f(list);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}

	printf("\n");
	va_end(list);
}
