#include "holberton.h"

/**
 *print_alphabet - prints the alphabet, in lowercase
 *Return: always 0 (success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	{
		_putchar('\n');
	}
}
