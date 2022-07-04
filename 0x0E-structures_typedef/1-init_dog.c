#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer of struct dog to init
 * @name: name to inint
 * @age: age to innit
 * @owner: owner to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	printf("\n");
}
