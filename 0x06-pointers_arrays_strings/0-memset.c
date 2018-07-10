/**
* _memset - fills memory with constant byte
* @s: area to be changed
* @b: constant to be used
* @n: amount to fill
* Description: fills memory with constant byte, starting at s, up to n
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;

return (s);
}
