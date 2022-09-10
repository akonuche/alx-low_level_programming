#include <stdio.h>

/**
 * main - print all single digit number of base 10 from 0
 * Return: Always 0 success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
