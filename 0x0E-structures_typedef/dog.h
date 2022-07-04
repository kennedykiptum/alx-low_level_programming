#ifndef DOG_H
#define DOG_H

/**
 * struct dog - gives information
 * @name: the name of dog
 * @age: dogs age
 * @owner: dog owner
 * Description: describes the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;	
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
