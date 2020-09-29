#include "holberton.h"
/**
 * swap_int - swapping integers
 *
 * int c: place holder
 * @a: integer swap
 * @b: integer swap
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
