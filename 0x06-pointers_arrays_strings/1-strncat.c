#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: byte from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, count1;

	count = 0;

	count = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
