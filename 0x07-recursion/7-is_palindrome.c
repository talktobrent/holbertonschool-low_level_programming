#include "holberton.h"

/**
* findpal - find palindrome
* @s: string to test
* @count: counts up elements in string
* Return: 0 if not palindrome, 1 if so
*/
int findpal(char *s, int count);

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

