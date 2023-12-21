#include <stdio.h>
/**
 * main - print the sum of all multiples of 3 or 5 up to 1024
 * Return: Always 0
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (z % 5 == 0))
		{
			z += 1;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
