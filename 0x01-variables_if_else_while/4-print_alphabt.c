#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kul, e, q;

	e = 'e';
	q = 'q';

	for (kul = 'a'; kul <= 'z'; kul++)
	{
		if (kul != e && kul != q)
		{
			putchar(kul);
		}
	}
		putchar('\n');
		return (0);
}
