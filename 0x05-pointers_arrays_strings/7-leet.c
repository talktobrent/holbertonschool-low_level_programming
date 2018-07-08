/**
* *leet - encodes to 'leet' (1337)
* @s: string to be changed
* Description: changes some letters to numeric similar shape
* Return: modified string
*/

char *leet(char *s)
{
int count, test;
char low[] = {'a', 'e', 'o', 't', 'l'};
char cap[] = {'A', 'E', 'O', 'T', 'L'};
char leet[] = {'4', '3', '0', '7', '1'};

	for (count = 0; s[count] != 0; count++)
	{
		for (test = 0; test < 5; test++)
			if (s[count] == cap[test] || s[count] == low[test])
				s[count] = leet[test];
	}
return (s);
}
