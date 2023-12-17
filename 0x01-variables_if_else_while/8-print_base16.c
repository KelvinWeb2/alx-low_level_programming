#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	char kul;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}
	for (kul = 'a'; kul <= 'f'; kul++)
	{
		putchar(kul);
	}
	putchar('\n');
	return (0);
}
