#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - dog indentifier
* @name: name
* @age: age
* @owner: owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /* _DOG_H_ */
