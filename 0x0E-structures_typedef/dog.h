#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is the dog structure with name, age, and owner data
 * @name: pointer to dog name string
 * @age: dog age
 * @owner: pointer to dog owner string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
