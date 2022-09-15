#include "main.h"

/**
 * print_alphabet_x10 - Check main
 * Description: function prints using _putchar
 * lowercase alphabets 10 times
 * Return: Nothing
 */
	void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j =0; j < 10; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	}
}
