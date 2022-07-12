#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: string to convert
 * Desc: convert str to int considering all negatives
 * Return: integar
 */
int _atoi(char *s)
{
	int i, val, sign;

	val = 0;
	sign = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			val = val * 10 + sign * (s[i] - '0');
		if (val != 0 && !(s[i] >= '0' && s[i] <= '9'))
			return (val);
	}
	return (val);
}
