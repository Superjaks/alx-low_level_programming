#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Randomly generate password
 * Description: Program to randomly generates valid password
 * Return: 0
 */
int main(void)
{
	int pass, sum;

	srand(time(0));

	sum = 0;

	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}
