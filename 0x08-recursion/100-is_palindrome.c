#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * checkers - helper function for is_palindrome
 * @str: the string
 * @leng: length of string
 * @i: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int checkers(char *str, int leng, int i)
{
	if (i >= leng)
		return (1);
	if (str[leng] == str[i])
		return (checkers(str, leng - 1, i + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int j = 0;

	return (checkers(s, len - 1, j));
}
