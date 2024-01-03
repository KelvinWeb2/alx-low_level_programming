#include "main.h"

/**
 * _strcpy - Copy string pointed by src
 * @dest: char atring
 * @src: char string
 * Description: copy string pointed by src to the buffer pointed by dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int h = 0;

	while (src[h] != '\0')
	{
		dest[h] = src[h];
		h++;
	}
	dest[h] = '\0';
	return (dest);
}
