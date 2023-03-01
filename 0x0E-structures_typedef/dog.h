#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * struct dog - new puppy details
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: That's about all there is to it.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
