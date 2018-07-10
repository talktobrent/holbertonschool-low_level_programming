/**
* _strstr - finds same string in another string
* @haystack: string to be searched
* @needle: string to search for
*
* Description: when the full string of needle is found in haystack
* Return: beginning string match in haystack, plus the rest of haystack string
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int count, test;

for (count = 0; haystack[count] != 0; count++)
{
	test = 0;
	while (haystack[count + test] == needle[test])
	{
		test++;
		if (needle[test] == 0)
		{
			switch (haystack[count + test])
			{
				case 0:
				case 32:
					return (haystack + count);
			}
		}
	}
}
return (0);
}
