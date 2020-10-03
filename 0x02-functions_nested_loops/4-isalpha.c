#include "holberton.h"
/**
 * _isalpha - function checks for lowercase character
 *
 * @c: checking this character
 *
 *Return: 1 if alphabetic character. otherwise, 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
