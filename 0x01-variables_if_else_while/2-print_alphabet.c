#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = ' a ' ; ch <= ' z ' ; ch++)
	{
		putchar(ch);
	}

	return (0);
}
