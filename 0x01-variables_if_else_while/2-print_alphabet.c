#include <stdio.h>
/**
 * main - Print the alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	printf("\n");
	}

	return (0);
}
