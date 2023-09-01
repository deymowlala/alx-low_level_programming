#include <stdio.h>

/**
 * main - Program that prints the number
 * of arguments passed into it
 * @argc: Argument size / count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
