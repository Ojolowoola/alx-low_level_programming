#include "main.h"

/**
 * print_last_digit - print the last digit
 * @p: the number
 * Return: value of the last digit
 */
int print_last_digit(int p)
{
	int ld = p % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
