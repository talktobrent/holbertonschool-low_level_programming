#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: string to be added to
* @s2: string to be added
* @n: length of s2 to add
* Return: pointer to new combined string, NULL if fail
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int length1, length2, place;
char *newstring;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

length1 = 0;
length2 = 0;

while (s1[length1] != 0)
	length1++;

while (s2[length2] != 0)
	length2++;

if (n < length2)
	newstring = malloc(sizeof(char) * (length1 + n + 1));

else
	newstring = malloc(sizeof(char) * (length1 + length2 + 1));

if (newstring == NULL)
{
	free(newstring);
	return (NULL);
}

for (place = 0; place < length1; place++)
	newstring[place] = s1[place];

if (n < length2)
{
	for (place = 0; place < n; place++)
	{
		newstring[length1] = s2[place];
		length1++;
	}
}

else
{
	for (place = 0; place < length2; place++)
	{
		newstring[length1] = s2[place];
		length1++;
	}
}
newstring[length1] = 0;
return (newstring);
}
