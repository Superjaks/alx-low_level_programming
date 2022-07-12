/*
 * File: 1-swap.c
 * Auth: Superjaks
 */
#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: input 1
 * @b: input 2
 * Return: integars
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
