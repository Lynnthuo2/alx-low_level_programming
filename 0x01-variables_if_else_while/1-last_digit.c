#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;
	printf("Last digit of %d if %d ", n, f);
	if (f > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (f == 0)
	{
		printf("and is 0\n");
	}
	else if (f < 6 && f != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
