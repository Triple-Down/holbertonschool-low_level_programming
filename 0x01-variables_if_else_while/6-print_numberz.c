#include <stdio.h>

/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
