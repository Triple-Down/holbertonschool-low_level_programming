#include "holberton.h"
/**
 * _islower - function checks for lowercase character
 *
 * @c: checking this character
 *
 *Return: 1 if lowercase. otherwise, 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
