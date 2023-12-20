#include <stdio.h>
/**
 * main - print the sum of all multiples of 3 or 5 up to 1024
 * Return: Always 0
 */
int main(void)
{
	int j, e = 0;
	
	while (j < 1024)
	{
		if ((j % 3 == 0) || (j % 5 ==0))
		{
			e += 1;
		}
		j++;
	}
	printf("%d\n", e);
	return (0);
}
