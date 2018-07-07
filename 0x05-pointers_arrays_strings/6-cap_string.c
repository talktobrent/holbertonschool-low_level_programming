/**
* cap_string - capitalize of all words
* @s: string to be changed
* Description: capitalizes first letter of all words
* Return: modified string
*/

char *cap_string(char *s)
{
int count;
	for (count = 0; s[count] != 0; count++)
	{
		if (s[count] > 96 && s[count] < 123)
		{
			if (count == 0)
				s[0] = s[0] - 32;
			else
			switch (s[count - 1])
			case 10:
			case 32:
			case 9:
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			s[count] = s[count] - 32;
		}
	}
return (s);
}

