#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - the function returns the last integer of a number
 *
 * Return: 0 for successful exit
 */
int main(void)
{

	int n, dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;
	if (dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dig);
	} else
	{
		if (dig == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, dig);
		} else
		{
			if (dig < 6 && dig != 0)
			{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
			}
		}
	}
	return (0);
}
