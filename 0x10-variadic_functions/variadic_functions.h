#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct check - parameters checker
 * @c: type
 * @f: recieving function
*/
typedef struct check
{
	char *chk;
	void (*f)(va_list list);
} check_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
