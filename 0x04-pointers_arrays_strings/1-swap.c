/**
* swap_int - swaps ints
* @a: pointer to be swapped
* @b: pointer to be swapped
* Description: swaps values of two pointers
*/

void swap_int(int *a, int *b)
{
int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}

