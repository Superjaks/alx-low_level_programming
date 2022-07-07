/*
 * File: 3-print_numbers.c
 * Auth: Superjaks
 */
#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 'o');
	_putchar('\n');
}