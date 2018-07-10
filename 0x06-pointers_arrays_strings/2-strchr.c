/**
* _strchr - locates a character in a string
* @s: string to be searched
* @c: character to be looked for
*
* Description: searches for c character in a string
* Return: pointer to first occurance of char in string
*/

char *_strchr(char *s, char c)
{
int count;

for (count = 0; s[count] != 0; count++)
	if (s[count] == c)
		return (s + count);

return (s + count);
}
