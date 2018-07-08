/**
* *rot13 - encodes to rot13 encryption
* @s: string to be changed
* Description: changes every letter to +13 letters in alphabet
* Return: modified string
*/

char *rot13(char *s)
{
int test, count;
char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";



for (count = 0; s[count] != 0; count++)
	{
	for (test = 0; test < 51; test++)
	{
		if (s[count] == abc[test])
		{
			s[count] = rot[test];
			break;
		}
	}
	}


return (s);
}
