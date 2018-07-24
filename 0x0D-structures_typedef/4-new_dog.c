#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

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

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);



}



