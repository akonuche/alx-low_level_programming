#include <stdio.h>

/**
 * main - print all possible combinations
 * Return: Always 0 success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 58)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
