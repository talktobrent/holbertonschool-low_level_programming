#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - frees struct dog
* @d: dog struct
*/

void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);

}



