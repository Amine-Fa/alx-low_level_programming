#include <stdio.h>
#include <ctype.h>
/**
 * main - the function prints the alphabet
 * in lowercase and uppercase
 *
 * Return: 0 for successful exit
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		putchar(l - 32);
		l += 1;
	}
	putchar('\n');
	return (0);
}
