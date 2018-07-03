/**
* _strlen - returns length of string
* @s: pointer to string
* Return: count of char string length
*/

int _strlen(char *s)
{
int count;

for (count = 0; *s != '\0'; count++)
	s = s + 1;

return (count);
}

