/*
 * File: 2-print_alphabet_x10.c
 * Auth: Superjaks
 */
#include "main.h"
/**
 * print alphabet - a function prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
