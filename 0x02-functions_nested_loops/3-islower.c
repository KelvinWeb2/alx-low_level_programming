#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lower case or 0 for anything else
 */
int _islower(int k)
{
	if (k >= 97 && k <= 122)
	{
		return (1);
	}
	return (0);
}
