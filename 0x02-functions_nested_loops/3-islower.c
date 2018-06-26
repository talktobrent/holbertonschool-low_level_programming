/**
* _islower - checks for lowercase
* @c: number to be tested
*
* Description: test ASCII for lowercase
* Return: 1 or 0
*/

int _islower(int c)
{

	if (c > 96 && c < 123)
		return (1);

	return (0);
}
