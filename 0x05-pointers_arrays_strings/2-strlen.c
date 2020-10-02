#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to get the length of
 * Return: length of a string
 */
int _strlen(char *s)
{
	int IDX = 0;

	while (s[IDX] != '\0')
	{
		IDX++;
	}
	return (IDX);
}
