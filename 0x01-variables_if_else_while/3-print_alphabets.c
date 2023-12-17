#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kul;

	for (kul = 'a'; kul <= 'z'; kul++)
	{
		putchar(kul);
	}
	for (kul = 'A'; kul <= 'Z'; kul++)
	{
		putchar(kul);
	}
	putchar('\n');
	return (0);

}
