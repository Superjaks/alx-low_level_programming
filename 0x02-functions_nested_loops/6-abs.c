/*
 * File: 6-abs.c
 * Auth: Superjaks
 */
#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integar input
 * Return: absolute value of ab
 */
int _abs(int ab)

{
	return (ab * ((ab > 0) - (ab < 0)));
}
