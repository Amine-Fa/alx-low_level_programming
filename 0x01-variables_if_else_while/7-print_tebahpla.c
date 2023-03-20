#include <stdio.h>
/**
 * main - void function prints alphabet in reverse
 *
 * Return: 0 for successful exit
 */
int main(void)
{
	int alphabet = 'z';

	while (alphabet >= 'a' && alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet -= 1;
	}
	putchar('\n');
	return (0);
}
