#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, j;

		for (a = 1; a <= size; a++)
		{
			for (j = a; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= a; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
