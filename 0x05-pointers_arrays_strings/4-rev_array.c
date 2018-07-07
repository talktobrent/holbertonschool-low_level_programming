/**
* reverse_array - reverse an array
* @a: array to be reversed
* @n: length of array
*
* Description: reverses order of values in array
*/

void reverse_array(int *a, int n)
{
int place;
int hold;
n = n - 1;

for (place = 0; place <= n; place++)
	{
	hold = a[place];
	a[place] = a[n];
	a[n--] = hold;
	}


}
