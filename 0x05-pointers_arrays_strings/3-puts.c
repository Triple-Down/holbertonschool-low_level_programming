#include "holberton.h"
 /**
  * _puts : prints a string with a new line
  *
  * @str: char to check
  *
  * Return: always 0
  */
void _puts(char *str)
{
	int S = 0;

	while (str[S] != '\0')
	{
		_putchar(*(str + S));
		S++;
	}
	{
	_putchar('\n');
	}
}
