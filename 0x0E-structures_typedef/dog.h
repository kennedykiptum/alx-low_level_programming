#ifndef DOG_H
#define DOG_H

/**
 * struct dog - gives information about the struct
 * @name: the name of dog?
 * @age: the age of the dog?
 * @owner: the owner of the dog?
 * Description: describes the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;	
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
