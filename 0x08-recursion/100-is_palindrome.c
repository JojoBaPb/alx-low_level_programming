#include "main.h"

/**
 * palindrome_r - reads string
 * @string: string being read
 * @length: length of string
 * @a: to be incremented, 0 start
 * Return: 1 if it's a palindrome,
 */
int palindrome_r(char *string, int length, int a)
{
	if (a < length && string[a] == string[length])
		return (palindrome_r(string, length - 1, a + 1));
	if (string[a] != string[length])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns - returns length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome - checks to see if palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 * palindrome_r - reads string
 */
int is_palindrome(char *s)
{
	int x = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindrome_r(s, length, x));
}
