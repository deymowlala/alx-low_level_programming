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
	(void) argv;

	printf("Number of arguments: %d\n", argc - 1);
	return (90);
}
