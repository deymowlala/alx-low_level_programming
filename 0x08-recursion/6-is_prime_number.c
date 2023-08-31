#include "main.h"

/**
  * checkers - recursively checks the input from is_prime_number
  * @n: iterator
  * @j: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int checkers(int n, int j)
{
	if (j % n == 0 || j < 2)
		return (0);
	else if (n == j - 1)
		return (1);
	else if (j > n)
		return (checkers(n + 1, j));
	return (1);
}
/**
  * is_prime_number - checks number  if it is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	return (checkers(2, n));
}
