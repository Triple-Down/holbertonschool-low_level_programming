#include "holberton.h"

/**
 * _abs - function computers the absolute value of an interger
 *
 * @s: checking the value of this integer
 *
 *Return: value of integer
 */
int _abs(int s)
{

	if (s >= 0)
	{
		return (s);
	}
	else
	{
		return (s * -1);
	}
}
