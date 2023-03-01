#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: instance of struct dog
* @name: pointer being passed in
* @age: of dog in instance
* @owner: pointer to owner name in struct
* Return: Always 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
