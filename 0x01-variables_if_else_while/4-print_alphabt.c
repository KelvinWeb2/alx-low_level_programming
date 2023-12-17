#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kul, k, v;

	k = 'k';
	v = 'v';

	for (kul = 'a'; kul <= 'z'; kul++)
	{
		if (kul != k && kul != v)
		{
			putchar(kul);
		}
	}
		putchar('\n');
		return (0);
}
