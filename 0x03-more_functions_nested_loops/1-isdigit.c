/**
* _isdigit - checks for 0-9 digit
* @c: character checked
*
* Description: checks if 0-9
* Return: 1 if true 0 if not
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
