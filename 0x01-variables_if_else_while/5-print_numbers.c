#include <stdio.h>

/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '1' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
