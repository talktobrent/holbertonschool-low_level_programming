
/**
* print_alphabet - prints
*alphabet 10 times
*
* Void
*/

void print_alphabet(void);

{
int t = (0);

		while (t < 10)
		{
			int x = ('a');

			while (x <= 'z')
			{
			_putchar(x);
			x++;
			}
			if (t < 9)
			_putchar(10);

		t++;
		}

	_putchar(10);
}
