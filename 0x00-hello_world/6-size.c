#include <stdio.h>

/**
 * main - print sizes of various types
 * Return: 0 if exited rightly (various sizes and types)
 */
int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
