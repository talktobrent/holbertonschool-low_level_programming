/**
* _isalpha - checks for alpha char
* @c: character tested
*
* Description: tests ASCII range to find alpha char
* Return: 1 or 0
*/

int _isalpha(int c)
{

	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);

	return (0);
}
