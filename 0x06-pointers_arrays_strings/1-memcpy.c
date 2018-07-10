/**
* _memcpy - copies memory area
* @src: area to be copied
* @n: amount to be copied
* @dest: destination to be pasted into
* Description: copies n bytes from source, pastes into dest
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

return (dest);
}
