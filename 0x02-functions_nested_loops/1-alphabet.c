#include "main.h"

/**
 * main - alphabets, a progrma that prints alphabets in lowercase
 *
 * Return: always returns 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
