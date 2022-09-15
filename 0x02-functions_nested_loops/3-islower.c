#include "main.h"

/**
 * _islower - check main
 * @ch: An input character
 * Description: function uses _putchar function
 * to print lowercase alphabets 10 times
 * Return: 1 if lowercase  0 if uppercase
 */
int _islower(int ch)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == ch)
			lower = 1;
	}

	return (lower);
}

