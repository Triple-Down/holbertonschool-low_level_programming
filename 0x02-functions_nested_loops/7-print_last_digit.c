#include "holberton.h"

/**
 * print_last_digit - function prints the last digit of a number
 *
 * @l: last integer formula
 *
 *Return: value of last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
	l = n % 10;
	return (l);
	}

	else
	{
	l = n % 10;
	return (l * -1);
	}
}
