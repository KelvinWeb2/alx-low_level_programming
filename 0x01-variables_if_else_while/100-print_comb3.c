#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, v;

	for (k = '0'; k < '9'; k++)
	{
		for (v = k + 1; v <= '9'; v++)
		{
			if (v != k)
			{
				putchar(k);
				putchar(v);
				if (k == '8' && v == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
