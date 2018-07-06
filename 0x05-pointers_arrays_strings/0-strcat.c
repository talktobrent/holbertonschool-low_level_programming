/**
* _strcat - Concatenates two strings
* @dest: string to be appended upon
* @src: string to appended to dest
*
* Description: Concatenates two strings, src added to dest
* Return: Pointer to dest
*/

char *_strcat(char *dest, char *src)
{

int dest_count, src_count;

dest_count = 0;

while (dest[dest_count] != 0)
	dest_count++;

for (src_count = 0; src[src_count] != 0; src_count++)
	dest[dest_count++] = src[src_count];

dest[dest_count] = 0;

return (dest);
}
