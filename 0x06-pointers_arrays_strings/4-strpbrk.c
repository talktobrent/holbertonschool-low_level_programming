/**
* _strpbrk - finds first point string with matching byte
* @s: string to be searched
* @accept: characters in accept are looked for matches in s
*
* Description: points to element in s when a matching byte from accept is
* found, showing remaining string of s from that point on
* Return: remaining length of s, starting from first matched point
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int count, test;

for (count = 0; s[count] != 0; count++)
{
	for (test = 0; accept[test] != 0; test++)
	{
		if (s[count] == accept[test])
			return (s + count);
	}
}
return (0);
}
