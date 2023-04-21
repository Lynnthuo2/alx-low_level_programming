#include <stdio.h>
	#include <stdlib.h>


	/**
	 * main - prints its own opcodes
	 * @argc: number of arguments
	 * @argv: array of arguments
	 *
	 * Return: Always 0 (Success)
	 */
	int main(int argc, char *argv[])
	{
	  char j;
		int temp i;

		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}
		temp = atoi(argv[1]);
		if (temp <= 0)
		{
			printf("Error\n");
			exit(2);
		}
		j = (char *)main;

for ( = 0; i < temp; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != temp - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
