/**
* _strspn - finds length of string until characters dont match
* @s: string to be searched
* @accept: characters in accept are looked for matches in s
*
* Description: finds length of s while it consists
* entirely of characters contained in accept
* Return: length of s until character no longer matches accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count, test, match;

match = 0;

for (count = 0; count == match; count++)
{
	for (test = 0; accept[test] != 0; test++)
	{
		if (s[count] == accept[test])
			match++;
	}
}
return (match);
}
