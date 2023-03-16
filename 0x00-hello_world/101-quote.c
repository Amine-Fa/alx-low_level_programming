#include <stdio.h>
#include <unistd.h>
/**
 * main - this function returns a string without using puts or printf
 *
 * Result: 1 for successful exit
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
