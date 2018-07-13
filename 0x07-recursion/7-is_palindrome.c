#include "holberton.h"

/**
* _strlen_recursion - gets length of string
* @s: string to be tested
* Return: length of string
*/

int _strlen_recursion(char *s)
{


	if (*s != 0)
	return (1 + _strlen_recursion(s + 1));


	else
		return (0);
}

/**
* findpal - find palindrome
* @s: string to test
* @count: counts up elements in string
* Return: 0 if not palindrome, 1 if so
*/

int findpal(char *s, int count)
{
	if (count > _strlen_recursion(s) - 1 - count)
		return (1);

	if (s[count] != s[_strlen_recursion(s) - 1 - count])
		return (0);

	return (findpal(s, count + 1));
}

/**
* is_palindrome - finds if string palindrome
* @s: string to test
* Return: 0 if not palindrome, 1 if so
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (findpal(s, 0));
}

