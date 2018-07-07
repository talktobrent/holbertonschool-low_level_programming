/**
* string_toupper - change lowercase to upper
* @s: string to be changed
* Description: changes any lowercase char to upper
* Return: modified string
*/

char *string_toupper(char *s)
{
int count;
	for (count = 0; s[count] != 0; count++)
	{
		if (s[count] > 96 && s[count] < 123)
			s[count] = s[count] - 32;
	}
return (s);
}

