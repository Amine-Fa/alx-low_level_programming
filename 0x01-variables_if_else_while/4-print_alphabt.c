#include <stdio.h>
/**
 * main- the function prints the alphabets except 2
 *
 * Return: 0 for successful exit
 */
int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		if (l == 'q' || l == 'e')
		{
			l += 1;
			continue;
		} else
		{
			putchar(l);
			l += 1;
		}
	}
	putchar('\n');
	return (0);
}
