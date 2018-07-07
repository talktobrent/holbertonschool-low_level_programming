/**
* _strncat - Concatenates two strings
* @dest: string to be appended upon
* @src: string to appended to dest
* @n: bytes (length) from source to be copied
* Description: Concatenates two strings, src up to n added to dest
* Return: Pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{

int dest_count, src_count;

dest_count = 0;

while (dest[dest_count] != 0)
	dest_count++;

for (src_count = 0; src[src_count] != 0 && src_count < n; src_count++)
	dest[dest_count++] = src[src_count];

dest[dest_count] = 0;

return (dest);
}
