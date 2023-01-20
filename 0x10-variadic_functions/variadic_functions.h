#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * check_t - parameters checker
 * @c: type
 * @f: recieving function
*/
typeof struct check_t(char *c, int *f)
{
	char *chk;
	void (*f)(va_list list);
}

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
