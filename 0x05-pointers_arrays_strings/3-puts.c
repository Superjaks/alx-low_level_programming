/*
 * File: 3-puts.c
 * Auth: Superjaks
 */
#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
