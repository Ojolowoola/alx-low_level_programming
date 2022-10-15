#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int no;
	char bs;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	for (bs = 'a'; bs <= 'f'; bs++)
		putchar(bs);

	putchar('\n');

	return (0);
}
