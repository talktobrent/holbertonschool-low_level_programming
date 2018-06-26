
/**
* print_last_digit - print last digit
* @x: character tested
*
* Description: gets last digit of any number
* Return: value of x
*/

int print_last_digit(int x)
{
	if (x < 0)
		x = (x * -1);
	x  = (x % 10);
	x  = (x + 48);
	_putchar(x);
	return (x - 48);

}
