#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always zero (Success)
 *
 */
	int main(void)
{
	/* this program prints characters*/

	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	/*return 0: always*/
	return (0);
}
