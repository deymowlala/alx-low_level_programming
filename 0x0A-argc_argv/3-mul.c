#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int multiply = 1;
		int i;

		for (i = 1; i < argc; i++)
		{
			multiply = multiply * atoi(argv[i]);
		}
		printf("Multiplication result = %d\n", multiply);
	}
	else
		printf("error\n");
	return (1);
}
