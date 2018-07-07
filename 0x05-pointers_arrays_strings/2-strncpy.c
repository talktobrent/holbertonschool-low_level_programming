/**
* _strncpy - Copies a string into another
* @dest: string to be put into
* @src: string to copied from
* @n: bytes (length) from source to be copied
* Description: Copies n of src into beginning of dest, overwriting
* Return: Pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{

int src_count;

for (src_count = 0;  src[src_count] != 0; src_count++)
{
	if (src_count < n)
		dest[src_count] = src[src_count];
}

while (n - 1 > src_count)
	dest[src_count++] = 0;


return (dest);
}
