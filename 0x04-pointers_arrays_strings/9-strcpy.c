/**
* *_strcpy - copies string
* @src: string to be copied
* @dest: copied string goes here
* Return: value at dest
*/

char *_strcpy(char *dest, char *src)
{
int count;

for (count = 0; src[count] != 0; count++)
{
	dest[count] = src[count];
}
return (dest);
}

