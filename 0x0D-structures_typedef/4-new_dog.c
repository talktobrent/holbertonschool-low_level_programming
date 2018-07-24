#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * _strlen - returns length of string
  * @s: pointer to string
  * Return: count of char string length
  */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
		s = s + 1;

	return (count);
}

/**
  * *_strcpy - copies string
  * @src: string to be copied
  * @dest: copied string goes here
  * Return: value at dest
  */

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != 0; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}


/**
* new_dog - creates new dog with struct dog
* @name: dog name
* @age: age
* @owner: owner name
* Return: pointer to new struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namecopy, *ownercopy;

	namecopy = malloc(sizeof(char) * _strlen(name));
	ownercopy = malloc(sizeof(char) * _strlen(owner));
	if (ownercopy == NULL || namecopy == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = _strcpy(namecopy, name);
	newdog->age = age;
	newdog->owner = _strcpy(ownercopy, owner);
	return (newdog);



}



