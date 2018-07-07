/**
* _strcmp - Compares two strings
* @s1: string to be compared against
* @s2: string tester
*
* Description: compares two strings
* Return: difference in value
*/

int _strcmp(char *s1, char *s2)
{
int count;

count = 0;

for (count = 0; s1[count] == s2[count]; count++)
{
	if (s1[count] == 0)
		return (0);
}
return (s1[count] - s2[count]);
}
