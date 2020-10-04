#include "holberton.h"

/**
 * print_last_digit - function prints the last digit of a number
 *
 * @n: character to get last digit of
 *
 * Return: value of l (success)
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
	l = n % 10;
	_putchar(l + '0');
	return (l);
	}

	else
	{
	l = -1 * (n % 10);
	_putchar(l + '0');
	return (l);
	}
}
